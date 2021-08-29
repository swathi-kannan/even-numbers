
#include<stdio.h>
int main()
{
    int n,c=2;
    printf("\n Start");
    printf("\nEnter total number:");
    scanf("%d",&n);
    for(int j=1;j<=n;)
    {
        if(c%2==0)
        {
            printf("%d ",c);
            j++;
        }
        c++;
    }
    printf("\nEnd");
}
