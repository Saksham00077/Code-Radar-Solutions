// Your code here...
#include<stdio.h>
int sorted(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(sorted(arr,n)){
        printf("Sorted");
    }else{printf("Not Sorted");}
    
}
int sorted(int arr[],int n){
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            return 0;
        }
    }return 1;
}