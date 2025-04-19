#include <stdio.h>
int main()
{
    int n, x, y, tmp;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &x, &y);

    tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}