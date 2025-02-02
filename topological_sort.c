#include <stdio.h>

void main()
{
    int n, i, j, indegree, flag = 0, count = 0;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int arr[n][n], visit[n];
    printf("enter the adjacency matrix\n");
    for (i = 0; i < n; i++)
    {
        visit[i] = 0;
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }

    while (flag == 0)
    {
        flag = 1;
        for (i = 0; i < n; i++)
        {
            if (visit[i] == 0)
            {
                indegree = 0;
                for (j = 0; j < n; j++)
                {
                    if (!((visit[j] == 1) || (arr[j][i] == 0)))
                    {
                        indegree = 1;
                        break;
                    }
                }
                if (indegree == 0)
                {
                    visit[i] = 1;
                    printf("%d", i);
                    count++;
                    flag = 0;
                    break;
                }
            }
        }
    }
    // printf("count=%d\n", count);
    if (count != n)
        printf("topological order is not possible!");
}

/*
0 1 0 1 1
0 0 1 1 0
0 0 0 0 1
0 0 0 0 1
0 0 0 0 0
*/
