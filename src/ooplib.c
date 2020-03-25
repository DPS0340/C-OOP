#include "ooplib.h"
#include <stdlib.h>
#include <string.h>

char* assign(String string, const char* source) {
    strcpy(string.value, source);
    return string.value;
}

char* get(String string) {
    return string.value;
}

int cmp(String string, const char* source) {
    return strcmp(string.value, source);
}

int del(String string) {
    free(string.value);

    return 1;
}

String String_init(const char* source, int max_len) {
    String string;
    string.value = (char*)malloc(sizeof(char)*max_len);

    assign(string, source);

    string.assign = assign;
    string.get = get;
    string.cmp = cmp;
    string.del = del;

    return string;
}

