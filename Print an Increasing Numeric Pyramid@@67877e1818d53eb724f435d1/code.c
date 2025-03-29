#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=i-1;i>0;i--){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}