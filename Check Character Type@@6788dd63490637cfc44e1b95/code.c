#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (a=='a','A'||a=='e'||a=='i'||a=='o','O'||a=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}