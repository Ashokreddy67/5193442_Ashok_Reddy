#include <stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);
    int rank[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&rank[i]);
    }
    
    scanf("%d",&m);
    int player[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }
    int unique[n];
    int size = 0;
    unique[size++] = rank[0];
    for (int i = 1; i < n; i++) {
        if (rank[i] != rank[i - 1]) {
            unique[size++] = rank[i];
        }
    }
    
     int ind = size - 1;
     for (int i = 0; i < m; i++) {
        while (ind >= 0 && player[i] >= unique[ind]) {
            ind--;
        }
        printf("%d\n", ind + 2);
            
        
    
    }
    return 0;
}
