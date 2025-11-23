int myHashInt(int key, int m) {
    return key % m;
}

int myHashString(const std::string& str, int m) {
    int sum = 0;
    for(char c : str) sum += c;
    return sum % m;
}
