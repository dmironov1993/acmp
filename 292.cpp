//https://acmp.ru/index.asp?main=task&id_task=292

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
