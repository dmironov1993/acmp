//https://acmp.ru/index.asp?main=task&id_task=692

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if ((n & (n-1)) == 0 && n > 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
