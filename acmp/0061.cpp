//https://acmp.ru/index.asp?main=task&id_task=61

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,cnta = 0,cntb=0;
    for (int i = 0; i < 4; i++) {
        cin >> a >> b;
        cnta += a;
        cntb += b;
    }
    if (cnta > cntb) {
        cout << 1;
    } else if (cntb > cnta) {
        cout << 2;
    } else {
        cout << "DRAW";
    }
    return 0;
}
