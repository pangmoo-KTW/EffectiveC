// DO NOT EXECUTE THIS CODE

#include <stdio.h>
#include <limits.h>

int main(void){
    puts("Loop that never terminates");
    puts("due to wraparound\n");
    puts("Let unsigned i = 1.\n");
    for(unsigned i = 1; i >= 0; --i)
        printf("for(unsigned i = 1; i >= 0; --i)\n");
}
