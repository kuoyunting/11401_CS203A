// Author: 郭芸婷
// Student ID: s1131519
// Date: 2025/11/24

#include <string>

int myHashString(const std::string& str, int m) {
    if (m <= 0) return 0;

    int sum = 0;
    for (char c : str) {
        sum += (unsigned char)c;
    }

    return sum % m;
}
