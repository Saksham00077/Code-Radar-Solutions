#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char c;
    scanf("%c",&c);
    if(c=='+'){
        printf("%d\n",a+b);
    }else if(c=='-'){
        printf("%d\n",a-b);
        }
    else if(c=='*'){
        printf("%d\n",a*b);
        }
    else if(c=='/'){
        if (b == 0) {
            printf("error");
        } else {
            printf("%d\n", a / b);
        }
        }
    else{
        printf("error");
    }
    return 0;
}