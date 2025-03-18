#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch;
    for(int i=1;i<=n;i++){
        ch='A';
        for(int j=n;j>=i;j--){
            printf("%c ",ch);
            ch++;
        }printf("\n");
    }
    return 0;
}