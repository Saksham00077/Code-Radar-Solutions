#include<stdio.h>
int main(){
    int n,even=0,odd=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=1;j<n;j++){
        if(arr[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}