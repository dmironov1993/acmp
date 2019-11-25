//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=28&id_problem=159


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int h1,m1,s1;
    cin >> h1 >> m1 >> s1;
    int h2,m2,s2;
    cin >> h2 >> m2 >> s2;
    int time1 = h1*3600 + m1*60 + s1;
    int time2 = h2*3600 + m2*60 + s2;
    cout << time2 - time1;
    return 0;
}
