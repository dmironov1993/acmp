// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=31&id_problem=172

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double length = sqrt(1.0*(x1-x2)*(x1-x2) + 1.0*(y1-y2)*(y1-y2));
    cout << fixed << setprecision(5) << length;
    return 0;
}
