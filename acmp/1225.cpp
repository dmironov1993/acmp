//First solution by using predefined isdigit function
#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        char a;
        cin >> a;
        if (isdigit(a)) {
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}

//Second solution by using created IsDigit function
#include <bits/stdc++.h>
using namespace std;

bool IsDigit(char C) {
    vector<char> vect{'0','1','2','3','4','5','6','7','8','9'};
    for (char x: vect) {
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
        if (IsDigit(a)) {
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}
