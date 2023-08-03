#include <stdio.h>

int main(void){
    unsigned int ui = 100;          // unsigned is required
    unsigned u = ui;                // int can be omitted
    unsigned long long ull2 = u;    // int can be omitted
    unsigned char uc = ull2;        // unsigned is required
    unsigned int uint[4] = {ui, u, ull2, uc};

    int si = -100;          // signed can be omitted
    long long int sll = si; // signed and int can be omitted
    long long sll2 = sll;   // signed and int can be omitted
    signed char sc = sll2;  // signed is required for char
    int sint[4] = {si, sll, sll2, sc};

    for(int i = 0; i < 4; i++){
        printf("%d\n", uint[i]);
        printf("%d\n", sint[i]);
    }
    return 0;
}
