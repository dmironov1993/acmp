//https://acmp.ru/index.asp?main=task&id_task=839

#include <stdio.h>
#include <iostream>
#include <string>

bool isKnown(std::string b){
    for (int i = 0; i < (int)b.size(); i++) {
        if (b[i] == '0'){
            return false;
        }
    }
    return true;
}


int main() {
    std::string a;
    std::cin >> a;
    if (isKnown(a)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}
