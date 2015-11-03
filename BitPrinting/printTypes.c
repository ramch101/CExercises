#include <stdio.h>
#include "typeio.h"

#define C 42

int main(void) {
    char c = C;
    unsigned char uc = C;
    short int si = C;
    int i = C;
    long int li = C;
    unsigned int ui = C;
    unsigned long int uli = C;
    unsigned long long int ulli = C;
    float f = C;
    double d = C;
    long double ld = C;
    
    printType("Character", sizeof(c));
    printf("%c : ",c);
    printBits(sizeof(c), &c);
    printType("Unsigned character", sizeof(uc));
    printf("%u : ",uc);
    printBits(sizeof(uc), &uc);
    printType("Short Integer", sizeof(si));
    printf("%d : ",si);
    printBits(sizeof(si), &si);
    printType("Integer", sizeof(i));
    printf("%d : ",i);
    printBits(sizeof(i), &i);
    printType("Long Integer", sizeof(li));
    printf("%ld : ",li);
    printBits(sizeof(li), &li);
    printType("Unsigned Integer", sizeof(ui));
    printf("%u : ",ui);
    printBits(sizeof(ui), &ui);
    printType("Unsigned Long Integer", sizeof(uli));
    printf("%lu : ",uli);
    printBits(sizeof(uli), &uli);
    printType("Unsigned Long Long Integer", sizeof(ulli));
    printf("%llu : ",ulli);
    printBits(sizeof(ulli), &ulli);
    printType("Float", sizeof(f));
    printf("%f : ",f);
    printBits(sizeof(f), &f);
    printType("Double", sizeof(d));
    printf("%f : ",d);
    printBits(sizeof(d), &d);
    printType("Long Double", sizeof(ld));
    printf("%Lf : ",ld);
    printBits(sizeof(ld), &ld);
    
    return 0;
}

