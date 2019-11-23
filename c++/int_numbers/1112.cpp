//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=155

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while (true) {
        sum += n % 10;
        n /= 10;
        if (n < 10) {
            sum += n;
            break;
        }
    }
    cout << sum;
}
