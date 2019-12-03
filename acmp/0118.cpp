//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=28&id_problem=161

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,a,b;
    cin >> h >> a >> b;
    int diff = a-b;
    int cnt = 0;
    while (true) {
        if (h-a > 0) {
           cnt += 1;
           h -= diff;
        } else {
            cnt += 1;
            break;
        }
    }
    cout << cnt;
    return 0;
}
