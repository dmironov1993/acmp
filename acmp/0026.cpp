// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=31&id_problem=173

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double x1,y1,r1;
    cin >> x1 >> y1 >> r1;
    double x2, y2, r2;
    cin >> x2 >> y2 >> r2;
    double d = (x1-x2)*(x1-x2)+ (y1-y2)*(y1-y2);
    if (d <= (r1+r2)*(r1+r2) && d >= abs(r2 - r1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
