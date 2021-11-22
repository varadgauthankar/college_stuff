#include <stdio.h>

void main()

{
    int dsize, mtusize, oset, psize, ndsize, i;
    int flag = 1, mf = 1;
    char ident = 'x';
    FILE *f;

    f = fopen("out.txt", "wt");

    printf("enter the size of the data\n");
    scanf("%d", &dsize);

    while (flag == 1)

    {
        printf("ente the size of the the maximum transfer unit\n");
        scanf("%d", &mtusize);
        if ((mtusize - 20) % 8 == 0)
            flag = 0;
    }

    oset = 0;
    psize = mtusize - 20;
    for (i = 1; oset < dsize; i++)

    {
        fprintf(f, "%d\t%c\t%d\t%d\t%d\n", i, ident, mf, oset, psize);
        oset = oset + psize;
    }

    if (oset >= dsize)

    {
        mf = 0;
        oset = oset - psize;
        ndsize = dsize - oset;
        if (oset == dsize)
            ndsize = psize;
        fprintf(f, "%d\t%c\t%d\t%d\t%d\n", i, ident, mf, dsize, ndsize);
    }

    fclose(f);
}
