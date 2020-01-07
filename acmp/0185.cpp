//https://acmp.ru/index.asp?main=task&id_task=185
//https://www.youtube.com/watch?v=fCauVraz7Mg&list=PLES6U-jjEXseQ6UBxScgMsJfHPaq72w3Y&index=111

#include <cstdio>
#include <vector>

int main() {
    int n, winner;
    scanf("%d %d", &n, &winner);
    std::vector<bool> lost(1+n, false);
    while (true) {
        int faster;
        scanf("%d", &faster);
        if (faster == 0) {
            break;
        }
        int slower;
        scanf("%d", &slower);
        lost[slower] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (i != winner) {
            if (!lost[i]) {
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}
