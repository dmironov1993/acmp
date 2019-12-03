//https://www.youtube.com/watch?v=XFuZHCWBCAg

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int n3 = 0; n3 < 5; n3++) {
        if ((n-n3*3)%5 == 0) {
            int n5 = (n-n3*3) / 5;
            printf("%d %d\n", n5, n3);
            return 0;
        }
    }
    throw 1;
}
