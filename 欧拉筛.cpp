#include<cstring>
const int MAXN = 1E7 + 3;

bool f[MAXN];
int prime[MAXN], num = 0;

void makePrime() {
    memset(f, true, sizeof(f)); f[0] = f[1] = false;
    for (int i = 2; i <= MAXN; i++) {
        if (f[i]) prime[num++] = i;
        for (int j = 0; j < num && i*prime[j] < MAXN; j++) {
            f[i*prime[j]] =false;
            if (!(i%prime[j])) break;
        }
    }
}

int main() {
    return 0;
}