#include <stdio.h>
int main()
{
    int n, indx, val;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &indx, &val);

    return 0;
}