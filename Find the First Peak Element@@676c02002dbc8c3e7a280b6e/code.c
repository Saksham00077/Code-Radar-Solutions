#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=1;j<n;j++){
        if((arr[j]<arr[j+1])&&(arr[j+1]>arr[j+2])){
            printf("%d",arr[j+1]);
            break;
        }
    }
}