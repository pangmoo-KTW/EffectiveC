#include <stdio.h>
#include <limits.h>

int main(void){
    unsigned ui, sum;
    puts("Type two big unsigned numbers\n");
    scanf("%d %d", &ui, &sum);
    if (sum + ui > UINT_MAX)
        puts("Too big");
    else {
        sum = sum + ui;
        puts("Not that big.");
    }
    puts("Actually, for the wraparound,");
    puts("nothing could be big enough.");
    return 0;
}
