#include<stdio.h>
int main(){
    char max;
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++){
        if((arr[0]==arr[n-1])&&(arr[1]==arr[n-2])){
            max="YES"
        }
    
    }if((arr[0]==arr[n-1])&&(arr[1]==arr[n-2])){
        printf("%c",max);
    }
return 0;
}