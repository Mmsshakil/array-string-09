#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int x = 0; x < t; x++)
    {
        int n;
        scanf("%d", &n);
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int value = 0;
        int min_value;
        int first_time = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i < j)
                {
                    value = (arr[i] + arr[j]) + (j - i);
                    if (first_time)
                    {
                        min_value = value;
                        first_time = 0;
                    }
                    else if (value < min_value)
                    {
                        min_value = value;
                    }
                }
            }
        }

        printf("%d\n", min_value);
    }

    return 0;
}