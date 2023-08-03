#define AbsM(i, flag) ((i) >= 0 ? (i) : ((i)==(flag) ? (flag) : -(i)))
#include <stdio.h>
#include <limits.h>

int main(void){
    signed si;
    printf("Type a negative number greater than -2147483648: ");
    scanf("%d", &si);
    signed abs_si = AbsM(si, INT_MIN); 
    printf("Absoulte value of %d is %d\n", si, abs_si);
}
