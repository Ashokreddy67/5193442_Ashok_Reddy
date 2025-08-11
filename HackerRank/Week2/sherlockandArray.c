#include <stdio.h>
#include <stdlib.h>



char* balancedSums(int arr_count, int arr[]) {
int total_sum=0;

for(int i=0;i<arr_count;i++){
    total_sum+=arr[i];
}
int left_sum = 0;
for (int i = 0; i < arr_count; i++) {
    int right_sum = total_sum - left_sum - arr[i]; /*difference of left array right array*/
       if (left_sum == right_sum) {
            return "YES\n";
        }
        left_sum += arr[i];
    }
    return "NO\n";
}


int main(){
    int T,arr_count;
    scanf("%d",&T);
   for (int t = 0; t < T; t++) {
        scanf("%d", &arr_count);
        
    int arr[arr_count];
    for(int i=0;i<arr_count;i++){
        scanf("%d",&arr[i]);
    }
    printf("%s",balancedSums(arr_count,arr));
   }
    
    
    
return 0;
    
    
    
}
