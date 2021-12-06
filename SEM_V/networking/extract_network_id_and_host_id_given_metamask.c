#include <stdio.h>
#include <math.h>

void main()
{
    int i, p, q, r, a, b, c, d;
    printf("Enter an up address: \n");
    scanf("%d", &i);
    scanf("%d", &p);
    scanf("%d", &q);
    scanf("%d", &r);

    printf("ip adress is %d.%d.%d.%d\n", i, p, q, r);

    if (p <= 255 && q <= 255 && r <= 255)
    {
        if (i <= 127)
        {
            if (i >= 0)
            {
                a = 255;
                b = 0;
                c = 0;
                d = 0;

                printf("class A\n");

                a = a & i;
                b = b & p;
                c = c & q;
                d = d & r;

                printf("Network id is %d.%d.%d.%d\n", a, b, c, d);
                printf("Host id is %d.%d.%d\n", p, q, r);
            }
        }
        else if (i <= 191)
        {
            if (i > 127)
            {
                a = 255;
                b = 255;
                c = 0;
                d = 0;

                printf("Class B\n");
                a = a & i;
                b = b & p;
                c = c & q;
                d = d & r;

                printf("Network id is %d.%d.%d.%d\n", a, b, c, d);
                printf("host id is %d.%d\n", q, r);
            }
        }

        else if (i <= 223)
        {
            if (i > 191)
            {
                a = 225;
                b = 255;
                c = 255;
                d = 0;

                printf("Class C\n");

                a = a & i;
                b = b & p;
                c = c & q;
                d = d & r;

                printf("Newtwork id is %d.%d.%d.%d\n", a, b, c, d);
                printf("Host id is %d\n", r);
            }
        }

        else if (i > 223)
        {
            printf("Wrong ip address\n");
        }
    }
    else
        printf("Wrong ip address\n");
}
