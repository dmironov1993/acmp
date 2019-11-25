//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=30&id_problem=174

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int x,y;
    cin >> x >> y;
    if (x==1&&y==1) {
        cout << 0;
    } else if ((x==1 || y == 1) || (x != y)) {
        cout << 1;
    } else {
        cout << 2;
    }
    return 0;
}
