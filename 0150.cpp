//https://acmp.ru/index.asp?main=task&id_task=150
//https://www.youtube.com/watch?v=dcDq5ya7PTg



//First solution
#include <cstdio>
#include <vector>
#include <functional>

int main() {
    int n,s;
    scanf("%d %d", &n, &s);
    std::vector<std::vector<bool>> isFriend(1+n, std::vector<bool>(1+n));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int v;
            scanf("%d", &v);
            isFriend[i][j] = (v==1);
        }
    }
    std::vector<bool> visited(1+n, false);
    int ans=0;
    std::function<void(int)> visit = [&](int cur) {
        if (visited[cur]) {
            return;
        }
        visited[cur] = true;
        ans++;
        for (int v = 1; v <= n; v++) {
            if (isFriend[cur][v]) {
                visit(v);
            }
        }
    };
    visit(s);
    printf("%d", ans - 1);
    return 0;
}
