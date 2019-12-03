//https://acmp.ru/index.asp?main=task&id_task=42

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n2, n3;
    if (n%3==0) {
        //no twos
        n2 = 0;
        n3 = n/3;
    } else if (n%3 == 1) {
        //two twos
        n2 = 2;
        n3 = (n-4)/3;
    } else {
        //one twos
        n2 = 1;
        n3 = (n-2)/3;
    }
    long long ans;
    ans = pow(2,n2)*pow(3,n3);
    cout << ans;
    return 0;
}
