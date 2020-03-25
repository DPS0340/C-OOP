#include <stdio.h>
#include <stdlib.h>
#include "ooplib.h"

int main(void) {
    String string = String_init("DPS0340", 100);

    printf("%s\n", string.get(string));

    string.assign(string, "JL");

    printf("%s\n", string.get(string));

    printf("%d", string.cmp(string, "AA"));

    string.del(string);

    return 0;
}