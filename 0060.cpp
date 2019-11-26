//https://www.youtube.com/watch?v=kLg6qEbxjfU
//https://acmp.ru/index.asp?main=task&id_task=60

#include <cstdio>

bool isPrime(int n) {
    for (int d = 2; d <= n / d; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return n > 1;
}

int main() {
    int need;
    scanf("%d", &need);
    int pos1 = 0;
    int pos2 = 0;
    for (int i = 1; ; i++) {
        if (isPrime(i)) {
            pos1++;
            if (isPrime(pos1)) {
                pos2++;
                if (pos2 == need) {
                    printf("%d", i);
                    return 0;
                }
            }
        }
    }
}
