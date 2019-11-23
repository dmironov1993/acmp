// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=157


#include <bits/stdc++.h>
using namespace std;

int main() {
    int v,t;
    cin >> v >> t;
    int dist = v*t;
    int ans = 0;
    if (dist > 0) {
        if (dist <= 108) {
            ans += dist + 1;
        } else {
            int c = dist % 109;
            cout << c + 1;
        }
    } else {
        dist = abs(dist);
        int c = dist % 109;
        cout << 109 - c + 1;
    }
}
