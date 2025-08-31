

#include <stdio.h>
#include <stdlib.h>
#include <time.h>




void rand_string(char *s, size_t size){
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (size_t i = 0; i < size; i++) {
        int key = rand() % (sizeof(charset) - 1);
        s[i] = charset[key];
    }
    s[size] = '\0';
}



