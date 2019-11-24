//https://acmp.ru/index.asp?main=task&id_task=149

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        v.push_back(e);
    }
    for (int i = n-1; i>= 0; i--) {
        cout << v[i] << " ";
    }
}
