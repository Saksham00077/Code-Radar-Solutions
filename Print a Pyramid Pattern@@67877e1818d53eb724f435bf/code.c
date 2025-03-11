#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=i-1;j>=0;j--){
            printf(" ");
        }for (int k=1;k=2a-1;k+=2){
            printf("*");
        }printf("\n");
    }
    return 0;
}