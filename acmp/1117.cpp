//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=28&id_problem=160


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int b = 0;
    for (int i = 1; i < n; i++) {
        if (i%2==0) {
            b += 15;
        } else {
            b += 5;
        }
    }
    int time = n*45+b;
    int hour, min;
    hour = time / 60;
    min = time % 60;
    cout << 9 + hour << " " << min;
}
