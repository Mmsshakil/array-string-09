#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int copy[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = n - 1, j = 0; i > j; i--, j++)
    {
        if (arr[i] != arr[j])
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}