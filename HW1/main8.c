/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// function prototype
char detectcase(char c); // detect upper/lower case
char clonecase(char c, char ref); // clone ref's case and then apply it to c
char casenum(char c); // convert A/a to 0 .. Z/z to 26

int main() {
    char a[] = "Hello";

    int size = sizeof(a) / sizeof(a[0]) - 1;

    for (int i = 0; i < size; i++) {
        printf("%c", clonecase(a[size-i-1], a[i]));
    }
    printf("\n");

    return 0;
}

char detectcase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 'A';
    }
    if (c >= 'a' && c <= 'z') {
        return 'a';
    }
}

char clonecase(char c, char ref) {
    return casenum(c) + detectcase(ref);
}

char casenum(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c-'A';
    }
    if (c >= 'a' && c <= 'z') {
        return c-'a';
    }
}
