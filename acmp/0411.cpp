// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=31&id_problem=180


#include <bits/stdc++.h>
#include <math.h>
#include <iomanip>
using namespace std;
 
 
 
int main() {
    double a,b,c;
    cin >> a >> b >> c;
    if (a == 0 && b==0 && c==0) {
        cout << -1;
    } else if (a == 0 && b==0 && c!=0) {
        cout << fixed << setprecision(10) << 0;
    } else if (a == 0 && b!=0 && c==0) {
        cout << 1 << "\n";
        cout << fixed << setprecision(10) << 0;
    } else if (a == 0 && b!=0 && c!=0) {
        cout << 1 << "\n";
        cout << fixed << setprecision(10) << (-1) * c / b;
    } else if (a!= 0 && b!=0 && c!=0) {
        double d = b*b - 4*a*c;
        if (d > 0) {
            double x1 = (-b - sqrt(d)) / (2*a);
            double x2 = (-b + sqrt(d)) / (2*a);
            cout << 2 << "\n";
            cout << fixed << setprecision(10) << x1 << "\n";
            cout << fixed << setprecision(10) << x2;
        } else if (d==0) {
            cout << 1 << "\n";
            cout << fixed << setprecision(10) << (-1)*b/(2*a);
        } else {
            cout << 0;
        }
    } else if (a!=0 && b!=0 && c == 0) {
        cout << 2 << "\n";
        cout << fixed << setprecision(10) << 0 << "\n";
        cout << fixed << setprecision(10) << (-1)*b/a;
    } else if (a!=0 && b==0 && c == 0) {
        cout << 1 << "\n";
        cout << fixed << setprecision(10) << 0;
    } else if (a!=0 && b==0 && c!=0) {
        cout << 0;
    }
    return 0;
}
