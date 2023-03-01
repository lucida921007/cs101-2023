/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char a[] = "AABBBCCCCddd";

    int len = sizeof(a) / sizeof(a[0]) - 1;
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (count == 0) {
            printf("%c", a[i]);
        }
        count++;
        if (a[i] != a[i+1]) {
            printf("%d", count);
            count = 0;
        }
    }
    printf("\n");
    return 0;
}