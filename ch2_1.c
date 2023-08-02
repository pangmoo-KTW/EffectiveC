/* Add a retrieve function to the counting example
 * from Listing 2-6 to retrieve the current value
 * of counter.*/

#include <stdio.h>

int* retrieve(int *a) { return a; }

int* increment(void) {
    static unsigned int counter = 0;
    counter++;
    retrieve(&counter);
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        int* a = increment();
        printf("%d\n", *a);
    }
    return 0;
}
