#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quicksort(int *a, int size)
{
    if(size > 1)
    {
        int temp, piv = a[0], r = size-1;
        for(int i = size-1; i >= 0; --i)
        {
            if(a[i] >= piv)
            {
                temp = a[i];
                int j = i;
                while(j < r)
                {
                    a[j] = a[j+1];
                    j++;
                }
                a[r--] = temp;
            }
        }
        r++;
        quicksort(a, r);
        quicksort(a+r+1, size-r-1);
        for(int i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
int main() 
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,n);
    return 0;
}


