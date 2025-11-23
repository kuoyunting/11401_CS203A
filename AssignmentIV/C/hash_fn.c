#include "hash_fn.h"
int myHashInt(int key, int m) {
    if (m <= 0) return 0;
    if (key < 0) key = -key;
    return key % m;
}

int myHashString(const char* str, int m) {
    if (m <= 0) return 0;

    unsigned long hash = 0;
    int p = 31; 
    
    for (int i = 0; str[i] != '\0'; i++) {
        hash = (hash * p + (unsigned char)str[i]) % m;
    }

    return (int)hash;
}
