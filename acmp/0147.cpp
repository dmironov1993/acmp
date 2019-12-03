// https://acmp.ru/index.asp?main=task&id_task=147

#include <cstdio>

int Fib(int n) {
    if (n==0) {
        return 0;
    }
    if (n >= 1) {
        int a0 = 0, a1 = 1, next;
        int cnt = 1;
        while (cnt != n) {
            next = a0 + a1;
            a0 = a1;
            a1 = next;
            cnt += 1;
        }
        return next;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", Fib(n));
    return 0;
}
