//https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=22&id_topic=85&id_problem=440

//First solution
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long x,y,z;
    cin >> x >> y >> z;
    long long ans = x*3 + y*5 + 12*z;
    cout << ans;
}

//Second solution
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long x,y,z;
    cin >> x >> y >> z;
    cout << 3*x + 5*y + 12*z;
}
