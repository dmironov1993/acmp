//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=158

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int a = 0,b = 0,c = 0;
    a = k / n;
    b = k - n*(k/n);
    if (b != 0) {
        c = n - b;
    } else {
        c = 0;
    }
    cout << a << " " << b << " " << c;
}
