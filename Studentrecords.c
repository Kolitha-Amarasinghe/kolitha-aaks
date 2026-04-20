#include<stdio.h>
float sum(int c);
float avg(float T,int d);
float sum(int c)
{
    int i,total=0;
    float m;
    for(i=0;i<c;i++)
    {
        printf("Enter sutents mark%d:",i+1);
        scanf("%f",&m);
        total+=m;
    }
    return total;
}
float avg(float T,int d)
{
    float A;
    A=(T/d);
    return A;
}
int main()
{
    int s_id,n;
    float q,w;
    printf("Enter No of students:");
    scanf("%d",&n);
    q=sum(n);
    w=avg(q,n);
    printf("%d. Student total score:%.2f\n",scanf("%d",&s_id),q);
    printf("%d. student average score:%.2f\n",scanf("%d",&s_id),q);
    return 0;
}