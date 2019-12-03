//Sorting by choosing
// https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=12&id_topic=8&id_problem=739

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
    vector<int> idx;
    for (int i = n - 1; i >= 0; i--) {
        int m = -pow(10,9) - 1, pos = 0;
        for (int j = 0; j <= i; j++) {
            if (v[j] > m) {
                m = v[j];
                pos = j;
            }
        }
        swap(v[i], v[pos]);
        idx.push_back(pos);
    }
    for (int i = 0; i < (int)idx.size(); i++) {
        cout << idx[i] << " ";
    }
    return 0;
}
