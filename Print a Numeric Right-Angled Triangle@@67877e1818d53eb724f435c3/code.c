#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i=0){
        for (int j=1;j<=i;j++){
            printf("%d",i);
        }printf("\n");
    }
    return 0;
}