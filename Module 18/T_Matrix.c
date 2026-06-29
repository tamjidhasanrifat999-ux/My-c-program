#include <stdio.h>
#include <stdlib.h>
int main()
{

    int N;

    scanf("%d", &N);

    int sum_primary = 0;
    int sum_secondary = 0;

    int element;

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {

            scanf("%d", &element);

            if (i == j)
            {
                sum_primary += element;
            }

            if (i + j == N - 1)
            {
                sum_secondary += element;
            }
        }
    }

    int difference = sum_primary - sum_secondary;

    printf("%d\n", abs(difference));

    return 0;
}
