#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n>='A'&&n<='Z') {
        printf("Uppercase");
    }else if (n>'a'&&n<'z'){
        printf("Lowercase");
    }else{
        printf("Not alphabet");
    }
    return 0;
}