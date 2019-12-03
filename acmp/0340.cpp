//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=31&id_problem=1216

#include <bits/stdc++.h>
using namespace std;

bool firstCan(vector<int> v1, vector<int> v2) {
    for (int i = 0; i < 3; i++) {
        if (v1[i] > v2[i]) {
            return false;
        }
    }
    return true;
}

bool secondCan(vector<int> v1, vector<int> v2) {
    for (int i = 0; i < 3; i++) {
        if (v2[i] > v1[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a1,b1,c1;
    cin >> a1 >> b1 >> c1;
    vector<int> a(3);
    a[0] = a1;
    a[1] = b1;
    a[2] = c1;
    sort(a.begin(), a.end());

    int a2,b2,c2;
    cin >> a2 >> b2 >> c2;
    vector<int> b(3);
    b[0] = a2;
    b[1] = b2;
    b[2] = c2;
    sort(b.begin(), b.end());

    if (a == b) {
        cout << "Boxes are equal";
    } else if (firstCan(a,b)) {
        cout << "The first box is smaller than the second one";
    } else if (secondCan(a,b)) {
        cout << "The first box is larger than the second one";
    } else {
        cout << "Boxes are incomparable";
    }
    return 0;
}
