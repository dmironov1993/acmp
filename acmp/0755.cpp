//https://acmp.ru/index.asp?main=task&id_task=755

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    int ans = x+y - z;
    if (ans >= 0) {
        cout << ans;
    } else {
        cout << "Impossible";
    }
    return 0;
}
