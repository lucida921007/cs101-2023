/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char a[] = "A3B2C4A9";
    //char a[]="A3BB2CCC2";

    int index1=0, index2=0;
    for (int i=0; i<sizeof(a)/sizeof(a[0])-1; i++) {
        if (a[i]>='0' && a[i]<='9') {
            index2=i;
            for (int j=0; j<a[index2]-'0'; j++) {
                for (int k=index1; k<index2; k++) {
                    printf("%c",a[k]);
                }
            }
            index1=index2+1;
        }
    }
    printf("\n");
    return 0;
}
