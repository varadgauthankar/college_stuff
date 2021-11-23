#include <stdio.h>
// #include <conio.h>
// #include <process.h>
#include <string.h>
#include <math.h>

#define IN 99
#define N 8

// char *strrev(char *str)
// {
//     char *p1, *p2;

//     if (!str || !*str)
//         return str;
//     for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
//     {
//         *p1 ^= *p2;
//         *p2 ^= *p1;
//         *p1 ^= *p2;
//     }
//     return str;
// }

int dijkstra(int cost[][N], int source, int target)
{
    int dist[N], prev[N], selected[N] = {0}, i, m, min, start, d, j;
    char path[N];

    for (i = 0; i < N; i++)
    {
        dist[i] = IN;
        prev[i] = -1;
    }

    start = source;
    selected[start] = 1;
    dist[start] = 0;

    while (selected[target] == 0)
    {
        min = IN;
        m = 0;
        for (i = 1; i < N; i++)
        {
            d = dist[start] + cost[start][i];
            if (d < dist[i] && selected[i] == 0)
            {
                dist[i] = d;
                prev[i] = start;
            }
            if (min > dist[i] && selected[i] == 0)
            {
                min = dist[i];
                m = i;
            }
        }
        start = m;
        selected[start] = 1;
    }

    start = target;
    j = 0;

    while (start != -1)
    {
        path[j++] = start + 65;
        start = prev[start];
    }

    path[j] = '\0';
    // strrev(path);
    printf("%s", path);
    return (dist[target]);
}

void main()
{
    int cost[N][N], i, j, w, ch, co;
    int source, target, x, y;
    printf("\t Shortest parth Algorithm DIJKSRTRA's ALGORITHM \n\n");

    for (i = 0; j < N; i++)
        for (j = 1; j < N; j++)
            cost[i][j] = IN;

    for (x = 0; x < N; x++)
    {
        for (y = x; y < N; y++)
        {
            printf("Enter the weight of the path between mode %d and %d: ", x, y);
            scanf("%d", &w);
            cost[x][y] = cost[y][x] = w;
        }
        printf("\n");
    }

    printf("Enter the sources: ");
    scanf("%d", &source);

    printf("enter the target: ");
    scanf("%d", &target);

    co = dijkstra(cost, source, target);

    printf("\nshortest path : %d", co);
}