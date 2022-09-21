#include <stdio.h>    
#define n 7    
int main()    
   {    
    int arr[n] = {26,28,37,26,33,31,29};     
        int temp;
    for( i = 0; i<n; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++)
	{
        printf("%d\n", arr[i]); 
    
    }     
    return 0;    
}
