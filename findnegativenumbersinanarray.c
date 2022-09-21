#include<stdio.h>
int main()  {
    int i, n, count = 0, arr[] = {0,160,180,270,160,230,210,190,0};
    n = sizeof(arr)/sizeof(arr[0]);

    for(i=0; i<n; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }

    printf("number of negative numbers in array elements: %d", count);
}
