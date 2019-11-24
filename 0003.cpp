//https://acmp.ru/index.asp?main=task&id_task=3


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    if (n==5) {
        cout << 25;
    } else {
        n /= 10;
        cout << n*(n + 1)*100 + 25;
    }
}
