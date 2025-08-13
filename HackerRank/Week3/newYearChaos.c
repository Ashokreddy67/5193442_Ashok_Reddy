#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void minimumBribes(int q_count, int* q) {
    int bribes = 0;
    int p1 = 1;
    int p2 = 2;
    int p3 = 3;
    
    for(int i = 0; i < q_count; i++) {
        if (q[i] == p1) {
            p1 = p2;
            p2 = p3;
            p3++;
        }
        else if(q[i] == p2) {
            bribes++;
            p2 = p3;
            p3++;
        }
        else if(q[i] == p3) {
            bribes += 2;
            p3++;
        }
        else {
            printf("Too chaotic\n");
            return;
        }
    }
    
    printf("%d\n", bribes);
}

int main() {
    int t;
   
    scanf("%d", &t);
    
    while(t--) {
        int n;
      
        scanf("%d", &n);
        
        int* q = (int*)malloc(n * sizeof(int));
        
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &q[i]);
        }
        
        minimumBribes(n, q);
        
        free(q);
    }
    
    return 0;
}
