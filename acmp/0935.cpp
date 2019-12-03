//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=30&id_problem=183

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    string f, s;
    if ((x1%2==0 && y1%2==0) || (x1%2!=0 && y1%2!=0)) {
        f = "black";
    } else {
        f = "white";
    }
    if ((x2%2==0 && y2%2==0) || (x2%2!=0 && y2%2!=0)) {
        s = "black";
    } else {
        s = "white";
    }
    if (f==s) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
