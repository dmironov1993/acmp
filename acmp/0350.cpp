//https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=9&id_topic=123&id_problem=765
//https://www.youtube.com/watch?v=Y4A3sSv1ZwY

#include <cstdio>
#include <string>
#include <algorithm>

int main() {
    char buffer[8+1];
    scanf("%8s", buffer);
    std::string s(buffer);
    std::sort(s.begin(), s.end());
    do {
        printf("%s\n", s.c_str());
    } while (std::next_permutation(s.begin(), s.end()));
    return 0;
}
