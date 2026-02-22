#include<stdio.h>
int main(){
    int n,missing;
    printf("enter number of terms:");
    scanf("%d",&n);
    int sum_total=(n*(n+1))/2;
    int arr[n-1];
     for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
     }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    missing=sum_total-sum;
}