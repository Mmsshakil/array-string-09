#include <stdio.h>
int main()
{
    int n, indx, val;
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &indx, &val);

    for (int i = n; i >= indx + 1; i--) // this is very important
    {
        arr[i] = arr[i - 1];
    }

    arr[indx] = val;

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}