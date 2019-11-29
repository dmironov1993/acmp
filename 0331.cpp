//https://acmp.ru/index.asp?main=task&id_task=331

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string start;
    cin >> start;
    int init_hour = stoi(start.substr(0,2));
    int init_min = stoi(start.substr(3,5));
    int init_tot_min = 60*init_hour + init_min;
    int a,b;
    cin >> a >> b;
    int path_min = 60*a+b;
    int diff = init_tot_min + path_min;
    int fin_hour = diff / 60;
    if (fin_hour >= 24) {
        int c;
        c = fin_hour / 12;
        fin_hour -= c * 12;
    }
    int fin_min = diff % 60;
    string h = to_string(fin_hour);
    if ((int)h.size() < 2) {
        h = "0" + h;
    }
    string m = to_string(fin_min);
    if ((int)m.size() < 2) {
        m = "0" + m;
    }
    cout << h << ":" << m;
    return 0;
}
