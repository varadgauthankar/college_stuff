#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>    // for close
#include <arpa/inet.h> // fixed inet_adder error

int main()
{
    int sockfd, len, len1;
    struct sockaddr_in ser_address;
    struct sockaddr_in cli_address;
    char str[256];

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    ser_address.sin_family = AF_INET;
    ser_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    ser_address.sin_port = 2002;
    len = sizeof(ser_address);

    cli_address.sin_family = AF_INET;
    cli_address.sin_addr.s_addr = htonl(INADDR_ANY);
    cli_address.sin_port = htonl(0);
    len1 = sizeof(cli_address);

    bind(sockfd, (struct sockaddr *)&cli_address, len1);
    printf("enter the string to find its length: \n");
    fgets(str, 256, stdin);
    sendto(sockfd, str, strlen(str), 0, (struct sockaddr *)&ser_address, len);
    bzero(str, 256);

    int n = recvfrom(sockfd, str, 256, 0, (struct sockaddr *)&ser_address, (int *)&len);
    str[n] = '\0';
    printf("the length Calculated by Server is: ");

    fputs(str, stdout);
    printf("\n");
    close(sockfd);
    return (0);
}
