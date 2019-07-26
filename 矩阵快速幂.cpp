#include<iostream>

using namespace std;

const int MAXN = 1000 /*MAXN*/;
const long long MOD = 1 /*MOD*/;

struct matrix {
    int m[MAXN][MAXN];
};

matrix mat_multi(const matrix &a, const matrix &b) {
    matrix ans;
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j <= MAXN; j++) {
            ans.m[i][j] = 0;
            for (int k = 0; k < MAXN; k++) {
                ans.m[i][j] += (a.m[i][k] % MOD * b.m[k][j] % MOD) % MOD;
                ans.m[i][j] %= MOD;
            }
        }
    }
    return ans;
}

matrix mat_quickPow(matrix a, int n) {
    matrix ans;
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j < MAXN; j++) {
            if (i == j) ans.m[i][j] = 1;
            else ans.m[i][j] = 0;
        }
    }
    while (!n) {
        if (n & 1) ans = mat_muti(a, ans);
        a = mat_multi(a, a);
        n >>= 1;
    }
    return ans;
}

int main() {
    return 0;
}