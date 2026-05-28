#include<stdio.h>
#include<string.h>
int main()
{
    char a[12];
    char s[12]="xxxxxxxxxxxx";
    printf("Enter acc number:");
    fgets(a,sizeof(a),stdin);
    if(strlen(a)>=8)
    {
        strncpy(s,a,4);
        s[12]='\0';
        printf("%s\n",s);
    }
    

    return 0;
}