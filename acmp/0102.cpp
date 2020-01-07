// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=6&id_topic=117&id_problem=724

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int a = (x1 - x4)*(y2 - y1) - (x2-x1)*(y1-y4);
    int b = (x2 - x4)*(y3 - y2) - (x3 - x2)*(y2 - y4);
    int c = (x3 - x4)*(y1 - y3) - (x1 - x3)*(y3 - y4);
    if (a >= 0 && b >= 0 && c >= 0) {
        cout << "In";
    } else if (a <= 0 && b <= 0 && c <= 0) {
        cout << "In";
    } else {
        cout << "Out";
    }
    return 0;
}
