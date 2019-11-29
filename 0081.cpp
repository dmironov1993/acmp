//https://acmp.ru/index.asp?main=task&id_task=81

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ma = INT_MIN, mi = INT_MAX;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > ma) {
            ma = num;
        } 
        if (num < mi) {
            mi = num;
        }
    }
    cout << mi << " " << ma;
    return 0;
}
