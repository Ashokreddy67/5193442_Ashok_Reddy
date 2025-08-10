#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int comp(const void*a,const void*b){
    return (*(int*)a- *(int*)b);
}
int minMax(int n,int k,int arr[]){
    qsort(arr,n, sizeof(int),comp);
   
    int minuniq=INT_MAX;
    for(int i=0;i<=n - k;i++){
        int diff=arr[i+k-1]-arr[i];
        if (diff<minuniq){
            minuniq=diff;
            
        }
        
    }
    return minuniq;
}

int main(){
    int n,k;
    
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("%d",minMax( n,  k, arr));
    return 0;
    
}
