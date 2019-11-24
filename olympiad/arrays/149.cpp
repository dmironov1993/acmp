//https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=10&id_topic=4&id_problem=16

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
