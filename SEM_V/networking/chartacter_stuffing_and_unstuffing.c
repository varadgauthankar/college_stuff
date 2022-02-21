#include <stdio.h>

void main()
{

    char name[50];
    char output[50];

    int i = 0;
    int j = 1;

    printf("Enter your name (in BLOCK): ");
    scanf("%s", name);

    output[0] = 'A';

    // stuffing
    for (; name[i] != '\0'; i++, j++)
    {
        if (name[i] == 'A')
        {
            output[j] = name[i];
            output[++j] = name[i];
        }
        else
        {
            output[j] = name[i];
        }
    }

    output[j] = 'A';
    output[j + 1] = '\0';

    printf("STUFFING\n");
    printf("%s", output);

    // unstuffing

    for (i = 1, j = 0; output[i] != '\0'; i++, j++)
    {
        name[j] = output[i];

        if (output[i] == 'A' && output[i + 1] == 'A')
            i++;
    }

    name[j] = '\0';

    printf("\n\nUN-STUFFING\n");
    printf("%s", name);
}
