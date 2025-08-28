#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* highestValuePalindrome(char* s, int n, int k) {
    char* str = strdup(s);              
    int* changed = calloc(n, sizeof(int)); 
    int needed = 0;

    
    for (int i = 0; i < n / 2; i++) {
        int j = n - 1 - i;
        if (str[i] != str[j]) {
            needed++;
            if (str[i] > str[j]) {
                str[j] = str[i];
            } else {
                str[i] = str[j];
            }
            changed[i] = changed[j] = 1; // mark changed position
        }
    }

   
    if (needed > k) {
        free(changed);
        free(str);
        return "-1";
    }

    int remaining = k - needed;

    
    for (int i = 0; i < n / 2; i++) {
        int j = n - 1 - i;
        if (str[i] != '9') {
            if (changed[i] && remaining >= 1) {
              
                str[i] = str[j] = '9';
                remaining--;
            } else if (!changed[i] && remaining >= 2) {
                
                str[i] = str[j] = '9';
                remaining -= 2;
            }
        }
    }

    
    if (n % 2 == 1 && remaining > 0) {
        str[n / 2] = '9';
    }

    free(changed);
    return str;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    char s[100005];
    scanf("%s", s);

    char* result = highestValuePalindrome(s, n, k);
    printf("%s\n", result);

    if (result != s && result != "-1") free(result); 
    return 0;
}
