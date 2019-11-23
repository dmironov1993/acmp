// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=147


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n==5) {
        cout << 25;
    } else {
        n /= 10;
        cout << n*(n + 1)*100 + 25;
    }
}
