// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=154

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int size = (int)n.size();
    if (size == 1) {
        cout << 0;
    } else {
        cout << n[size-2];
    }
}
