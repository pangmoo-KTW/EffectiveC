#include <stdio.h>

int m[2] = {1,2};

int sum_m_elems(void) {
  int *pi; int j = 0;
  for (pi = &m[0]; pi < &m[2]; ++pi) j += *pi;
  return j;
}

int main(void){
  printf("%d\n", sum_m_elems());
  return 0;
}
