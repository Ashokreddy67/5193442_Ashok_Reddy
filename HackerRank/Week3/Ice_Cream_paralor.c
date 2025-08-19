#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ice_Cream_paralor(int k,int n,int arr[]){
    
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i] + arr[j] == k) {
                printf("%d %d\n", i + 1, j + 1);
                return;
        }
        
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int k,n;
        scanf("%d",&k);
        scanf("%d",&n);
    int arr[n];
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    Ice_Cream_paralor(k,n,arr);
    }
    
    return 0;
}
