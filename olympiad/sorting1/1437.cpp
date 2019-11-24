//Маги
//https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=12&id_topic=8&id_problem=42


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<long long, int>> a;
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        a.emplace_back(make_pair(e,i));
    }
    vector<pair<long long, int>> b;
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        b.emplace_back(make_pair(e,i));
    }
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        cout << a[i].second + 1 << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << b[i].second + 1 << " ";
    }
    return 0;
}
