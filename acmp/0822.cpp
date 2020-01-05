//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=6&id_topic=116&id_problem=719

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double s = fabs(1.0 * (x2-x1)*(y3-y1) - 1.0*(x3-x1)*(y2-y1)) / 2.;
    cout << fixed << s;
    return 0;
}
