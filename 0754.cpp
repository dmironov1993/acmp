//https://acmp.ru/index.asp?main=task&id_task=754

#include <cstdio>
#include <vector>
#include <algorithm>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    std::vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    if (v[2] > 727 || v[0] < 94) {
        printf("%s", "Error");
    } else {
        printf("%d", v[2]);
    }
    return 0;
}
