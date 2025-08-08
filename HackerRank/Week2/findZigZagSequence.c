#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void findZigZagSequence(int a[], int n) {
    // Sort the array first  
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    
    int mid = (n + 1) / 2 - 1;  
    
    int t = a[mid];
    a[mid] = a[n - 1]; 
    a[n - 1] = t;
    
    
    int start = mid + 1;
    int end = n - 2;  
    while (start < end) {
        t = a[start];
        a[start] = a[end];
        a[end] = t;
        start++;
        end--; 
    }
    
    // Print the result
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        findZigZagSequence(a, n);
    }
    
    return 0;
}
