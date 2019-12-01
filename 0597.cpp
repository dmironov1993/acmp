//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=31&id_problem=171

#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int r1,r2,r3;
    cin >> r1 >> r2 >> r3;
    if (r1 >= r2 + r3) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
