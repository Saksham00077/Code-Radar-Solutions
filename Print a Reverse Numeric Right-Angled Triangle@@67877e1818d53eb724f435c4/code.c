#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;){
        for (int j=i;j>0;j--){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}