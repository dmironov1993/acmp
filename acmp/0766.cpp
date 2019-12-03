//https://acmp.ru/index.asp?main=task&id_task=766

#include <cstdio>

int main(){
    int n,m,k;
    scanf("%d %d %d", &n, &m, &k);
    if (n*m >= k) {
        printf("%s", "YES");
    } else {
        printf("%s", "NO");
    }
    return 0;
}
