#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;++i){
        if (i)
        for(int j=1;j<i;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}