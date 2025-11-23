//Author: 郭芸婷
//Student ID：s1131519
//Date 11/24

int myHashString(const std::string& str, int m) {
    if (m <= 0) return 0;

    unsigned long hash = 0;
    int p = 31;

    for (char c : str) {
        hash = (hash * p + (unsigned char)c) % m;
    }

    return (int)hash;
}
