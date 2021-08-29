#include<stdio.h>
int main()
{
    int n,c=2;
    printf("\n Start");
    printf("\nEnter total number:");
    scanf("%d",&n);
    for(int i=1;i<=n;)
    {
        if(c%2==0)
        {
            printf("%d ",c);
            i++;
        }
        c++;
    }
    printf("\nEnd");
}
