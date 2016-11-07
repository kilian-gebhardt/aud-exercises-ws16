#include <stdio.h>

int main() {
  unsigned fak, n, m;
  fak = 1;
  printf("Bitte n angeben: ");
  scanf("%d", &n);  
  m = n;
  
  for (; n > 1; n--)
    fak = fak * n;
  
  printf("%d! = %d\n", m, fak);
  
  
  return 0;
}
