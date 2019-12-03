//https://acmp.ru/index.asp?main=task&id_task=384


#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a,b);
    }
    return a;
}
 
int main() {
    int i,j, f0 = 0, f1 = 1;
    cin >> i >> j;
    for (i = gcd(i,j); i > 0; i--) {
        int f = (f0 + f1) % 1000000000;
        f0 = f1;
        f1 = f;
    }
    cout << f0 << endl;
}
