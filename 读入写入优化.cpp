#include<cstdio>
#include<cctype>

inline int read() {
    char c;
    int ans = 0;
    bool sign = false;
    while (!isdigit(c = getchar()) && c != '-');
    if (c == '-') {sign = true; c = getchar();}
    do {ans = (ans << 3) + (ans << 1) + (c - '0');} while (isdigit(c = getchar()));
    return sign ? -ans : ans;
}

inline void write(int x) {
    if (x < 0) {putchar('-'); x = -x;}
    if (x >= 10) write(x / 10);
    putchar(x%10 + '0');
}

int main() {
    return 0;
}