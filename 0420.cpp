//https://www.youtube.com/watch?v=QiZh2po6Xbk

#include <cstdio>
#include <string>
#include <cstdlib>

//making variables global
std::string s;
int pos;
char c;
const char EOT = '\n'; //end of text

void nextChar() {
    if (pos < (int)s.size()) {
        c = s[pos];
        pos++;
    } else {
        c = EOT; //we made it till the end of text
    }
}

void no() {
    printf("NO");
    std::exit(0);
}

void number() {
    if (c == '1') {
        nextChar();
        if ('0' <= c && c <= '9') {
            nextChar();
        } else {
            no();
        }
        while ('0' <= c && c <= '9') {
            nextChar();
        }
    } else if ('2' <= c && c <= '9') {
        nextChar();
        while ('0' <= c && c <= '9') {
            nextChar();
        }
    } else {
        no();
    }
}

std::string elementWithIndex() {
    std::string element;
    if ('A' <= c && c <= 'Z') {
        element += c;
        nextChar();
    } else {
        no();
    }
    if ('a' <= c && c <= 'z') {
        element += c;
        nextChar();
    }
    if ('0' <= c && c <= '9') {
        number();
    }
    return element;
}

void formula() {
    std::string prev = elementWithIndex();
    while (c != EOT) {
        std::string cur = elementWithIndex();
        if (prev == cur) {
            no();
        }
        prev = cur;
    }
}

int main() {
    char buffer[1000+1];
    scanf("%1000s", buffer);
    s = buffer;
    pos = 0;
    nextChar();
    formula();
    if (c != EOT) {
        no();
    }
    printf("YES");
    return 0;
}
