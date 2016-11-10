#include <stdio.h>
#include "sgrr_sort.h"

int main(void)
{
    int a[] = {4, 2, 5, 9, 3, -1, 0};
    int len = sizeof(a)/sizeof(int);
    QuickSort_int(a, 0, len-1);
    for(int i = 0; i < len; i ++)
    {
        printf("%d ", a[i]);
    } 
    printf("\n");
    return 0;
}
