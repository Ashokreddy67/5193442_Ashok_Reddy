#include <stdio.h>

int main() {
    long long n, zeroBits = 0;
    scanf("%lld", &n);
    
    if (n == 0) {
        printf("1\n");
        return 0;
    }
    
    while (n > 0) {
        if ((n & 1) == 0) zeroBits++;
        n >>= 1;
    }
    
    printf("%lld\n", 1LL << zeroBits);
    return 0;
}