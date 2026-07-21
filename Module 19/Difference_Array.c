#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;
    scanf("%d", &x);

    for (int y = 0; y < x;y++)
    {

        int z;
        scanf("%d", &z);

        int a[z], b[z], c[z];

        for (int i = 0; i < z; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for (int i = 0; i < z; i++)
        {
            for (int j = i + 1; j < z; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (int i = 0; i < z; i++)
        {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < z; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}
