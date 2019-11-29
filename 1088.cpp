//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=2&id_topic=30&id_problem=293




//First solution

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios_base::sync_with_stdio(0);
    int y1, y2;
    char a, b;
    cin >> a >> y1 >> b >> y2;
    
    int x1 = 0,x2 = 0;
    if (a=='A') {
        x1 =1;
    } else if (a =='B') {
        x1 = 2;
    } else if (a =='C') {
        x1 = 3;
    } else if (a =='D') {
        x1 = 4;
    } else if (a =='E') {
        x1 = 5;
    } else if (a == 'F') {
        x1 = 6;
    } else if (a == 'G') {
        x1 = 7;
    } else if (a =='H') {
        x1 = 8;
    }
    if (b=='A') {
        x2 =1;
    } else if (b =='B') {
        x2 = 2;
    } else if (b =='C') {
        x2 = 3;
    } else if (b =='D') {
        x2 = 4;
    } else if (b =='E') {
        x2 = 5;
    } else if (b == 'F') {
        x2 = 6;
    } else if (b == 'G') {
        x2 = 7;
    } else if (b =='H') {
        x2 = 8;
    }
    
    vector<string> ans;
    int q = 0;
    //for Rook
    if (x1 == x2 || y1 == y2) {
        ans.emplace_back("Rook");
        q += 1;
    }
    //For Bishop
    if (abs(x1-x2) == abs(y1-y2)) {
        ans.emplace_back("Bishop");
        q += 1;
    }
    //For Knight
    if ((abs(y1-y2)==2 && abs(x1-x2)==1) || (abs(x1-x2)==2 && abs(y1-y2)==1)) {
        ans.emplace_back("Knight");
    }
    //For Queen
    if (q==2 || q==1) {
        ans.emplace_back("Queen");
    }
    //For King
    if ((x2==x1 && abs(y1-y2)==1) || (y2==y1 && abs(x1-x2)==1) || (abs(x2-x1) == 1 && abs(y1-y2)==1)) {
        ans.emplace_back("King");
    }
    //For Pawn
    if (x1 == x2) {
        if (y1 > 2) {
            if (y2 - y1 == 1) {
                ans.emplace_back("Pawn");
            }
        } else if (y1 == 2) {
            if (y2 - y1 == 1 || y2 - y1 == 2) {
                ans.emplace_back("Pawn");
            }
        }
    }
    if (ans.empty()) {
        cout << "Nobody";
    } else {
        for (int i = 0; i < (int)ans.size(); i++) {
            cout << ans[i] << "\n";
        }
    }
    return 0;
}
