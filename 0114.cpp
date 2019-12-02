//https://acmp.ru/index.asp?main=task&id_task=114
//https://www.youtube.com/watch?v=jx1S7opHay8

#include <cstdio>
#include <vector>

int main() {
    int n, base;
    scanf("%d %d", &n, &base);
    std::vector<int> count(1+n);
    count[1] = base - 1;
    count[2] = (base-1) * base;
    for (int i = 3; i <= n; i++) {
        count[i] = (base-1) * (count[i-1] + count[i-2]);
    }
    printf("%d", count[n]);
    return 0;
}
