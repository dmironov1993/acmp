//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=1436

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;
    cout << (a%b + abs(b))%abs(b);
}
