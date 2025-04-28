#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int max_position = 0;
    int min = arr[0];
    int min_position = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_position = i;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            min_position = i;
        }
    }

    arr[max_position] = min;
    arr[min_position] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}