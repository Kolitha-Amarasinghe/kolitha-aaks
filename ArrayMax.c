#include<stdio.h>
int main()
{
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);

    int arr[x];
    for(int i=0;i<x;i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d",&arr[i]);
    }

    int *y = arr;   
    for(int i=1;i<x;i++)
    {
        if(arr[i] > *y)  
        {
            y = &arr[i];  
        }
        printf("Current Max value:%d\n",*y);
    }

    printf("Your Max value: %d\n", *y);
    return 0;
}
