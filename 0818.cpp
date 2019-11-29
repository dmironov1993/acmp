//https://acmp.ru/index.asp?main=task&id_task=818

#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);
    int a,s=0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        s += a;
    }
    printf("%d", s-(n-1));
    return 0;
}
