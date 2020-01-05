#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        char a;
        cin >> a;
        if (isdigit(a)) {
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}
