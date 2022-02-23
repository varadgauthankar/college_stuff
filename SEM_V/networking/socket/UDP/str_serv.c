
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <fcntl.h>  // for open
#include <unistd.h> // for close

int main()
{
    int serv_sockfd;
    int serv_len, cli_len;
    struct sockaddr_in serv_address;
    struct sockaddr_in cli_address;
    serv_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    bzero((char *)&serv_address, sizeof(serv_address));
    serv_address.sin_family = AF_INET;
    serv_address.sin_port = 2002;
    serv_len = sizeof(serv_address);

    if (bind(serv_sockfd, (struct sockaddr *)&serv_address, serv_len) == -1)
    {
        printf("some error here....");
        close(1);
    }

    while (1)
    {
        char str[256];

        cli_len = sizeof(cli_address);
        printf("\n server is ready \n");
        int n = recvfrom(serv_sockfd, str, sizeof str, 0, (struct sockaddr *)&cli_address, (socklen_t *)&cli_len);
        n -= 1;
        write(1, str, n);
        write(1, "\n\n", 2);
        bzero(str, sizeof(str));
        sprintf(str, "%d", n);
        n = strlen(str);
        sendto(serv_sockfd, str, n, 0, (struct sockaddr *)&cli_address, cli_len);
    }
}
