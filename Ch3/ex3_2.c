#include <stdio.h>
#include <limits.h>

int main(void){
    unsigned int ui = UINT_MAX;
    unsigned uip = ui + 1;
    unsigned uim = uip - 1;
    puts("Wraparound example\n");
    printf("UNIT_MAX = %u\n", ui);
    printf("%u + 1 = %u\n", ui, uip);
    printf("%u - 1 = %u\n", uip, uim);
    return 0;
}
