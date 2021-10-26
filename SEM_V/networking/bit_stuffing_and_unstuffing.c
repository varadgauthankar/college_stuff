#include <stdio.h>
#include <string.h>

void main()
{
    char bits[50];
    char stuffed[50];
    char unStuffed[0];
    int i = 0;
    int j = 0;
    int count = 0;

    printf("\tEnter bits: ");
    scanf("%s", bits);

    //Stuffing start

    stuffed[0] = '0';
    stuffed[1] = '1';
    stuffed[2] = '1';
    stuffed[3] = '1';
    stuffed[4] = '1';
    stuffed[5] = '1';
    stuffed[6] = '1';
    stuffed[7] = '0';

    i = 8;

    for (j = 0; bits[j] != '\0'; i++, j++)
    {
        if (bits[j] == '1')
        {
            count++;
        }
        else
        {
            count = 0;
        }

        stuffed[i] = bits[j];

        if (count == 5)
        {
            stuffed[++i] = '0';

            count = 0;
        }
    }

    stuffed[i++] = '0';
    stuffed[i++] = '1';
    stuffed[i++] = '1';
    stuffed[i++] = '1';
    stuffed[i++] = '1';
    stuffed[i++] = '1';
    stuffed[i++] = '1';
    stuffed[i++] = '0';

    stuffed[i] = '\0';

    printf("\tSTUFFED: %s\n", stuffed);

    //Stuffing end

    //un stiffing start

    for (count = 0, i = 0, j = 8; j < strlen(stuffed) - 8; i++, j++)
    {
        if (stuffed[j] == '1')
        {
            count++;
        }
        else
        {
            count = 0;
        }

        unStuffed[i] = stuffed[j];

        if (count == 5)
        {
            j++;
            count = 0;
        }
    }

    unStuffed[i] = '\0';

    printf("\tUN-STUFFED: %s\n", unStuffed);

    //un stiffing end
}