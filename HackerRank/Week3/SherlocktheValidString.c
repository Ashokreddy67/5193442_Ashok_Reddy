#include <stdio.h>
#include <string.h>

const char* isValid(char* s) {
    int freq[256] = {0}; 
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        unsigned char ch = s[i];
        freq[ch]++;
    }

    int freqCount[1001] = {0}; 
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            freqCount[freq[i]]++;
        }
    }

    int distinctFreq = 0, minFreq = 0, maxFreq = 0;
    for (int i = 1; i <= len; i++) {
        if (freqCount[i] > 0) {
            distinctFreq++;
            if (minFreq == 0) minFreq = i;
            maxFreq = i;
        }
    }

    if (distinctFreq == 1) return "YES";

    if (distinctFreq == 2) {
        if ((freqCount[1] == 1 && minFreq == 1) ||
            (freqCount[maxFreq] == 1 && maxFreq - minFreq == 1))
            return "YES";
    }

    return "NO";
}

int main() {
    char s[1001];
    scanf("%1000s", s); 
    printf("%s\n", isValid(s));
    return 0;
}
