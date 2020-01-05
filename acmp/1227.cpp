//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=6&id_topic=116&id_problem=716

#include <bits/stdc++.h>
using namespace std;

long long F(int n) {
    if (n == 0 || n==1) {
        return 1;
    }
    return n * F(n-1);
}

int main() {
    int n,k;
    cin >> n >> k;
    cout << F(n) / (F(k) * F(n-k));
    return 0;
}
