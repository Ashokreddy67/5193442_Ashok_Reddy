#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void xorStrings(char s[], char t[], char result[]) {
    int l = strlen(s);
    for(int i = 0; i < l; i++) {
        if(s[i] == t[i]) {
            result[i] = '0';  
        } else {
            result[i] = '1';  
        }
    }
    result[l] = '\0';  
}

int main() {
    char s[10001];  
    char t[10001];
    char result[10001];
    
    
    scanf("%s", s);
    scanf("%s", t);
    
    
    xorStrings(s, t, result);
    
  
    printf("%s\n", result);
    
    return 0;
}
