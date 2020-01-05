//Solution by implementing our own IsLetter function
//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=6&id_topic=116&id_problem=715

#include <bits/stdc++.h>
using namespace std;

bool IsLetter(char C) {
    vector<char> alphabet{'A','B','C','D','E','F',
                          'G','H','I','J','K','L','M','N','O',
                          'P','Q','R','S','T','U','V',
                          'W','X','Y','Z',
                          'a','b','c','d','e','f',
                          'g','h','i','j','k','l','m','n','o',
                          'p','q','r','s','t','u','v',
                          'w','x','y','z'};
    for (char x: alphabet) {
        if (x == C) {
            return true;
        }
    }
    return false;
}

int main() {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        char a;
        cin >> a;
        if (IsLetter(a)) {
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}
