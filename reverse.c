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

    int i = 0;     // aikhane o index ar value i a rakhbo
    int j = n - 1; // r sas ar index ar value ta j a rakhbo
    // ar por onno r akta temp integer nibo jetar madhome, i ar value temp a, j ar value i a , temp ar value j te jabe

    // loop ta calabo jotokhn porjonto i j thake choto thake
    // karon

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}