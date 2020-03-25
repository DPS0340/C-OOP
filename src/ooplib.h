#pragma once

typedef struct _String String;

struct _String {
    char* value;
    char* (*assign)(String string, const char* source);
    char* (*get)(String string);
    int (*cmp)(String string, const char* source);
    int (*del)(String string);
};

char* assign(String, const char*);
char* get(String);
int cmp(String, const char*);
int del(String);

String String_init(const char*, int);