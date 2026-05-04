#include<stdio.h>
void Sum(int *A);
void Sum(int *A)
{
    int x,y;
    printf("Enter U need value:");
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        *A+=y;
        x/=10;

    }
}
int main()
{
    int A;
    A=0;
    Sum(&A);
    printf("sum of your digits:%d\n",A);
    return 0;
}
