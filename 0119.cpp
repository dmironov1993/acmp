//https://acmp.ru/index.asp?main=task&id_task=119

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<tuple<int,int,int>> v;
    for (int i = 0; i < n; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        v.emplace_back(a,b,c);
    }
    sort(v.begin(), v.end());
    for (auto i: v) {
        cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << "\n";
    }
  return 0;
}
