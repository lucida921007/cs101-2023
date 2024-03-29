/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class ReplaceMyString {
    public:
    ReplaceMyString() {}
    void replaceString(string needle, string stick) {
        ifstream in("main.cpp");
        ofstream out("rmain.cpp");
        char c;
        while (true) {
            //in >> c; // 使用 >> 會直接忽略空白等特殊字元，可以嘗試 in.peek()
            in.get(c);
            if (in.eof()) {
                break;
            }
            if (c == needle[0]) {
                for (int i=1; i<needle.length(); i++) {
                    in >> c;
                    if (c != needle[i]) {
                        break;
                    }
                    if (i == needle.length()-1) {
                        for (int j=0; j<stick.length(); j++) {
                            out << stick[j];
                        }
                    }
                }
            } else {
                out << c;
            }
        }
        in.close();
        out.close();
    }
};

int main() {
    ReplaceMyString my;
    my.replaceString("IU is best", "IU is best is best");
    return 0;
}