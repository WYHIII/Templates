#include<iostream>

using namespace std;

const long long MOD = 1/*MOD*/;

long long quickPow(long long a, long long n) {
    long long r = 1;
    while (n) {
        if (n & 1) r = (r * a) % MOD;
        n >>= 1;
        a = (a * a) % MOD;
    }
    return r % MOD;
}

int main() {
    return 0;
}