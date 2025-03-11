#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a-1;i++){
        for (int j=i-1;j>=0;j--){
            printf(" ");
        }for (int k=1;k<=2*a-1;k++){
            printf("*");
        }printf("\n");
    }
    return 0;
}