// https://www.youtube.com/watch?v=Lty3p_3UDAo


#include <stdio.h>
#include <iostream>
using namespace std;

bool happensFast(long long a, long long b, long long c, long long d){
    if (a==c && b == d) {
        return true;
    }
    while (b!=0) {
        if (b > a) {
            swap(a,b);
            if (a==c && b == d) {
                return true;
            }
        }
        if (b>0) {
            long long nSub = a/b;
            long long oldA = a;
            a -= nSub * b;
            long long newA = a;
            if (b==d && newA <= c && c <= oldA && (oldA - c) % b == 0){
                return true;
        }
        }
    }
    return false;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        long long a,b,c,d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if (happensFast(a,b,c,d)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
