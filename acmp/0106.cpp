//https://acmp.ru/index.asp?main=task&id_task=106

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tail=0, head=0, a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a==0) {
            ++head;
        }
        if (a==1) {
            ++tail;
        }
    }
    if (head > tail){
        cout << tail;
    } else {
        cout << head;
    }
    return 0;
}
