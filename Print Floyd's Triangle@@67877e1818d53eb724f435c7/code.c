// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
}