//Solution from here 
// https://www.youtube.com/watch?v=zdi92oRDdjI&list=PLES6U-jjEXseQ6UBxScgMsJfHPaq72w3Y&index=3



//My solution

#include <bits/stdc++.h>
using namespace std;

int maxsubarr(vector<int> a, int n) {
    int ans = a[0], sum = 0;
    for (int r = 0; r < n; ++r) {
        sum += a[r];
        ans = max(ans, sum);
        sum = max(sum, 0);
    }
    return ans;
}

int main() {
    vector<int> a;
    int n;
    cin >> n;
    for (int k = 0; k < n; ++k) {
        int el;
        cin >> el;
        a.push_back(el);
    }
    int ans;
    ans = maxsubarr(a, n);
    cout << ans;
}
