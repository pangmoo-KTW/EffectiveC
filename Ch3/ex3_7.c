#include <stdio.h>
#include <limits.h>

int main(void){
    unsigned ui = UINT_MAX;
    signed char c = -1;
    if (c == ui)
        puts("-1 == 4,294,967,295 via Implicit Conversion");
    return 0;
}
