//https://acmp.ru/index.asp?main=task&id_task=312


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1,a2,n;
    cin >> a1 >> a2 >> n;
    int d = a2 - a1;
    cout << a1 + (n-1)*d;
    return 0;
}
