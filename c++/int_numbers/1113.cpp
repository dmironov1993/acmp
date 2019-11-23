//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=156


#include <bits/stdc++.h>
using namespace std;

int main() {
     int a,b;
     cin >> a >> b;
     int res1 = a%b;
     int res2 = b%a;
     if (res1 == 0 || res2 == 0) {
         cout << 1;
     } else {
         cout << 2;
     }
}
