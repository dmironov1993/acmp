//https://acmp.ru/index.asp?main=task&id_task=2

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a = (abs(n)*(abs(n)+1))/2;
    if (n > 0) {
        cout << a;
    } else if (n < 0) {
        cout << a*(-1) + 1;
    } else {
        cout << 1;
    }
    return 0;
}
