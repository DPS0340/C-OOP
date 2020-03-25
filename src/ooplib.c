#include "ooplib.h"
#include <stdlib.h>
#include <string.h>

char* _String_assign(String string, const char* source) {
    strcpy(string.value, source);
    return string.value;
}

char* _String_get(String string) {
    return string.value;
}

int _String_cmp(String string, const char* source) {
    return strcmp(string.value, source);
}

int _String_del(String string) {
    free(string.value);

    return 1;
}

String String_init(const char* source, int max_len) {
    String string;
    string.value = (char*)malloc(sizeof(char)*max_len);

    _String_assign(string, source);

    string.assign = _String_assign;
    string.get = _String_get;
    string.cmp = _String_cmp;
    string.del = _String_del;

    return string;
}

