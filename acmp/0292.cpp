//Solution taken from: https://www.youtube.com/watch?v=FZJCbDLBPgk
#include <cstdio>

bool isPrime(int n) {

    for (int d = 2; d <= n / d; d++) {
        if (n%d == 0) {
            return false;
        }
    }
    return n > 1;
}

int sumOfDigits(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    scanf("%d", &n);
    while (true) {
        if (isPrime(n)) {
            printf ("%d", n);
            return 0;
        }
        if (n < 10) {
            printf("0");
            return 0;
        }
        n = sumOfDigits(n);
    }
}


//https://acmp.ru/index.asp?main=task&id_task=292
//My soltuion

#include <bits/stdc++.h>
using namespace std;

bool IsPrime(long long a) {
    // Corner cases
    if (a <= 1)
        return false;
    if (a <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (a % 2 == 0 || a % 3 == 0)
        return false;

    for (long long i = 5; i * i <= a; i = i + 6)
        if (a % i == 0 || a % (i + 2) == 0)
            return false;

    return true;
}

    int root(long long a) {
    int cnt = 0;
    while (true){
        cnt += a % 10;
        a /= 10;
        if (a < 10) {
            cnt += a;
            break;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    long long n;
    cin >> n;
    while (true) {
        if (IsPrime(n)) {
            cout << n;
            break;
        } else if (not IsPrime(n) && n < 10) {
            cout << 0;
            break;
        } else {
            n = root(n);
            continue;
        }
    }
}
