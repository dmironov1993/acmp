// https://acmp.ru/index.asp?main=task&id_task=39

#include <cstdio>
#include <vector>
#include <algorithm>
 
int main() {
    int n;
    scanf("%d", &n);
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max=0;
    int sum=0;
    for (int i = n - 1; i >= 0; i--) {
        max = std::max(max, a[i]);
        sum += max;
    }
    printf("%d", sum);
    return 0;
}
