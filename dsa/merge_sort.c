#include <stdio.h>

void merge(int ar[], int m, int l, int h)
{
    int i, j, k;
    i = l;
    k = l;
    j = m + 1;
    int arr[43];
    while (i <= m && j <= h)
    {
        if (ar[i] < ar[j])
        {
            arr[k] = ar[i];
            i++, k++;
        }
        else
        {
            arr[k] = ar[j];
            j++, k++;
        }
    }
    while (i <= m)
    {
        arr[k] = ar[i];
        i++, k++;
    }
    while (j <= h)
    {
        arr[k] = arr[j];
        j++, k++;
    }
    for (int i = l; i <= h; i++)
    {
        ar[i] = arr[i];
    }
}
void mergeSort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, mid, l, h);
    }
}
int main()
{
    int ar1[] = {53, 54, 45, 56, 67};
    int m, n;
    m = n = 5;
    mergeSort(ar1, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", ar1[i]);
    }
    return 0;
}