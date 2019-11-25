//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=30&id_problem=277

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    char a;
    int b;
    cin >> a >> b;
    if ((a=='A'||a=='C'||a=='E'||a=='G')&&(b%2==0)) {
        cout <<"WHITE";
    } else if ((a=='B'||a=='D'||a=='F'||a=='H')&&(b%2!=0)) {
        cout << "WHITE";
    }
    else {
        cout << "BLACK";
    }
    return 0;
}
