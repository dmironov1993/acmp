//Bubble sorting
//https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=12&id_topic=8&id_problem=740

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        v.push_back(e);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (v[j] > v[j+1]) {
                cnt += 1;
                swap(v[j], v[j+1]);
            }
        }
    }
    cout << cnt;
    return 0;
}
