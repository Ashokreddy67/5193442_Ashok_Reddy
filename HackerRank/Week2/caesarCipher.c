#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char s[], int k) {
    k = k % 26;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            s[i] = ((s[i] - 'A' + k) % 26) + 'A';
        } else if (islower(s[i])) {
            s[i] = ((s[i] - 'a' + k) % 26) + 'a';
        }
    }
    printf("%s\n", s);
}

int main() {
    int n, k;
    char s[1001];
    scanf("%d", &n);
    scanf("%s", &s);
    scanf("%d", &k);
    caesarCipher(s, k);
    return 0;
}
