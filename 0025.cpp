//https://acmp.ru/index.asp?main=task&id_task=25

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a<b) {
        printf("%s", "<");
    } else if (a>b) {
        printf("%s", ">");
    } else {
        printf("%s", "=");
    }
    return 0;
}
