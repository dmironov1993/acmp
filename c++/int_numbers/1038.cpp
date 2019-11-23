// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=151

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pay = 0;
    cin >> n;
    int rem = n%10;
    if (rem > 0) {
        pay += 1;
    }
    pay += n/10;
    cout << pay;
}
