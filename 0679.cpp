//https://www.youtube.com/watch?v=a6slxpcjgcY
//https://acmp.ru/index.asp?main=task&id_task=679


#include <cstdio>
#include <cassert>

int main() {
    int n;
    scanf("%d", &n);
    int n2, n3;
    if (n%3==0) {
        n2 = 0;
        n3 = n / 3;
    } else if (n%3 == 1) {
        n2 = 2;
        n3 = (n-4) / 3;
    } else {
        assert(n%3==2);
        n2 = 1;
        n3 = (n-2)/3;
    }
    if (n2 > 0 && n3 > 0) {
        printf("2 %d 3 %d", n2, n3);
    } else if (n2 > 0) {
        assert(n3 == 0);
        printf("2 %d", n2);
    } else {
        assert(n2==0 && n3 > 0);
        printf("3 %d", n3);
    }
    return 0;
}
