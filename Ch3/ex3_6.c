#include <stdio.h>
// casting example
int main(void){
    int si = -10;
    short ss = -3;
    long sl = (long)si;
    unsigned short us = (unsigned short)(ss+sl);
    int c[4] = {si, ss, sl, us};
    for(int i=0; i<4; i++)      // for (unsigned short)(ss+sl)
        printf("%d\n", c[i]);   // : (0<=>)2^16 - 13 = 65523     
    return 0;
}
