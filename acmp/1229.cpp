//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=6&id_topic=116&id_problem=718

#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};

int Side(Point a, Point b) {
    return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y);
}

int main() {
   int x1,y1,x2,y2,x3,y3;
   cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
   struct Point p1 = {x1,y1};
   struct Point p2 = {x2,y2};
   struct Point p3 = {x3,y3};
   if (Side(p1,p2) + Side(p1,p3) == Side(p2,p3) ||
       Side(p2,p3) + Side(p2,p1) == Side(p3,p1) ||
       Side(p3,p1) + Side(p3,p2) == Side(p1,p2)) {
       cout << "Yes";
   } else {
       cout << "No";
   }
   return 0;
}
