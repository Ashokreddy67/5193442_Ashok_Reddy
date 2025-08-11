#include <stdio.h>

int getDaysInMonth(int m, int year) {
    if (m == 1) return 31;
    if (m == 2) {
        if (year % 400 == 0) return 29;
        if (year % 100 == 0) return 28;
        if (year % 4 == 0) return 29;
        return 28;
    }
    if (m == 3) return 31;
    if (m == 4) return 30;
    if (m == 5) return 31;
    if (m == 6) return 30;
    if (m == 7) return 31;
    if (m == 8) return 31;
    if (m == 9) return 30;
    if (m == 10) return 31;
    if (m == 11) return 30;
    if (m == 12) return 31;
    return 30; // default
}

int isLuckyDate(int d, int m, int y) {
    long long x = d;
    x = x * 100 + m;
    x = x * 10000 + y;
    return (x % 4 == 0 || x % 7 == 0);
}

int countLuckyDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    int count = 0;
    
    while (1) {
        if (isLuckyDate(d1, m1, y1)) {
            count++;
        }
        
        if (d1 == d2 && m1 == m2 && y1 == y2) {
            break;
        }
        
        d1++;
        if (d1 > getDaysInMonth(m1, y1)) {
            d1 = 1;
            m1++;
            if (m1 > 12) {
                m1 = 1;
                y1++;
            }
        }
    }
    
    return count;
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    
    scanf("%d-%d-%d %d-%d-%d", &d1, &m1, &y1, &d2, &m2, &y2);
    
    int result = countLuckyDates(d1, m1, y1, d2, m2, y2);
    printf("%d\n", result);
    
    return 0;
}
