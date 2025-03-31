#include<stdio.h>
int main(){
    int max;
    int n;
    scanf("%d",&n);
    // if (n==1){
    //     printf("YES");
    }
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++){
        if((arr[0]==arr[n-1])&&(arr[1]==arr[n-2])){
            max++;
        }
    
    }if((arr[0]==arr[n-1])&&(arr[1]==arr[n-2])){
        printf("YES");
    }else{
        printf("NO");
    }
return 0;
}