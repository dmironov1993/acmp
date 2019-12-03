// https://acmp.ru/index.asp?main=task&id_task=82

#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    int a[100001] = {0};
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a[num] = 1;
    }
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        if (a[num] == 1) {
            a[num] = 2;
        }
    }
    for (int i = 0; i < 100001; i++) {
        if (a[i] == 2) {
            cout << i << " ";
        }
    }
    return 0;
};
