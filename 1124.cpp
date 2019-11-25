//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=30&id_problem=189

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int x1,y1;
    cin >> x1 >> y1;
    int x2,y2;
    cin >> x2 >> y2;
    int diffx = abs(x1-x2), diffy=y2-y1;
    if (diffx != 0 || y1 == 1) {
        cout << "NO";
    } else {
        if (y1 == 2) {
            if (diffy == 1 || diffy == 2) {
                cout << "YES";
            } else {
                cout << "NO";
            }
        } else {
            if (diffy == 1) {
                cout << "YES";
            } else {
                cout << "NO";
            }
        }
    }
    return 0;
}
