#include <stdio.h>

int main(void){
  int i = 5;
  int e;
  e = i++;
  printf("e = i++ -> e : %d, i : %d\n", e, i); 
  e = i--;
  printf("e = i-- -> e : %d, i : %d\n", e, i);
  e = ++i;
  printf("e = ++i -> e : %d, i : %d\n", e, i);
  e = --i;
  printf("e = --i -> e : %d, i : %d\n", e, i);
  return 0;
}
