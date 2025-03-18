#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch;
    for(int i=1;i<=n;i++){
        ch='A';
        for(int j=i;j>0;j--){
            printf("%c ",ch);
        }printf("\n");
    }
    return 0;
}