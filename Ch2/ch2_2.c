/* Declare an array of three pointers to functions
 * and invoke the appropriate function based on an
 * index value passed in as an argument */

#include <stdio.h>

int funA(int a){ return a+100; }
int funB(int b){ return b+100; }
int funC(int c){ return c+100; }

int main(void){
    int (*p[3])(int) = {funA, funB, funC};
    int result;

    for (int i=0; i<3; i++){
        result = p[i](i);
        printf("%d\n", result);
    }
    return 0;
}
