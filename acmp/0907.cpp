//https://acmp.ru/index.asp?main=task&id_task=907


#include <bits/stdc++.h>
using namespace std;

int main() {
    double w,h;
    int r;
    cin >> w >> h >> r;
    if (w/2 >= r && h/2 >= r) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
