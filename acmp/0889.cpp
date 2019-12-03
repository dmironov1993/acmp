//Solution from https://www.youtube.com/watch?v=uP8jyVdJefE
#include <stdio.h>
#include <vector>
#include <algorithm>

struct Hor {
    int x;
    int y;
};

int main() {
    int start, n;
    scanf("%d %d", &start, &n);
    std::vector<Hor> h(n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &h[i].x, &h[i].y);
    }
    std::sort(h.begin(), h.end(), [](const Hor &left, const Hor &right) {
        return left.y > right.y;
    });
    int cur = start;
    for (Hor hor: h) {
        if (hor.x == cur) {
            cur++;
        } else if (hor.x + 1 == cur) {
            cur--;
        }
    }
    printf("%d", cur);
    return 0;
}



//My solution

#include <cstdio>
#include <vector>
#include <algorithm>

struct Move {
    int p;
    int h;
};

int main() {
    int k, m;
    scanf("%d %d", &k, &m);
    std::vector<Move> a(m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a[i].p, &a[i].h);
    }
    std::sort(a.begin(), a.end(), [](const Move &left, const Move &right) {
        return right.h < left.h;
    });
    for (int i = 0; i < m; i++) {
        if (a[i].p == k) {
            k += 1;
        } else if (a[i].p + 1 == k) {
            k -=1;
        } else {
            continue;
        }
    }
    printf("%d", k);
    return 0;
}
