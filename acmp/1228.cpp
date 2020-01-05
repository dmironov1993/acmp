//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=6&id_topic=116&id_problem=717

#include <bits/stdc++.h>
using namespace std;

int IsPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 2;
    if (n == 3) return 3;
    if (n%2 == 0 || n%3 == 0) return 0;

    for (int i = 5; i*i <= n; i=i+6) {
        if (n%i == 0 || n%(i+2) == 0) {
            return 0;
        }
    }
    return n;
}

int main() {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        int a;
        cin >> a;
        if (IsPrime(a)) {
            cnt += a;
        }
    }
    cout << cnt << "\n";
    if (IsPrime(cnt)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
