#include <stdio.h>
#include <string.h>

int numsi(long long sum){
    if(sum<10)
        return sum;
    long long newsum=0;
    while(sum>0){
        newsum+=sum%10;
        sum=sum/10;
    }
    return numsi(newsum);
}  
int recursive(char* n, long long k){
    int sum=0;
    int len =strlen(n);
    for(int i=0;i<len;i++){
        sum+=(n[i]-'0');
    }
    sum*=k;
    return numsi(sum);
}

int main() {
    char n[10001];
    long long k;
    
    scanf("%10000s", n);
    scanf("%lld", &k);
    
    printf("%lld",recursive(n, k));
    return 0;
}
