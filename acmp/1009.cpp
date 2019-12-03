//from here https://www.youtube.com/watch?v=ZZyfQw5gi6c&list=PLES6U-jjEXseQ6UBxScgMsJfHPaq72w3Y&index=6

#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

struct Man {
    std::string country;
    std::string name;
    std::string surname;
    std::vector<int> attempts;
};

std::string next() {
    char buffer[80 + 1];
    scanf("%80s", buffer);
    return buffer;
}

int main() {
    int n;
    scanf("%d", &n);
    std::vector<Man> a;
    for (int i = 0; i < n; i++) {
        std::string country = next();
        std::string name = next();
        std::string surname = next();
        std::vector<int> attempts;
        for (int i = 0; i < 6; i++) {
            std::string attempt = next();
            if (attempt != "x") {
                int d1 = attempt[0] - '0';
                int d2 = attempt[2] - '0';
                int d3 = attempt[3] - '0';
                attempts.push_back(d1 * 100 + d2 * 10 + d3);
            }
        }
        if (!attempts.empty()) {
            std::sort(attempts.rbegin(), attempts.rend()); //reverse order sorting
            a.push_back(Man{country, name, surname, attempts});
        }
    }
    std::sort(a.begin(), a.end(), [](const Man &left, const Man &right) {
        return left.attempts > right.attempts;
    });
    if (a.size() > 3) {
        a.resize(3);
    }
    for (int i = 0; i < (int)a.size(); i++) {
        printf("%d) %s %s %s %.2f\n", i+1, a[i].country.c_str(), a[i].name.c_str(), a[i].surname.c_str(), a[i].attempts[0] / 100.0);
    }
    if (a.empty()) {
        printf("No results.");
    }
    return 0;
}
