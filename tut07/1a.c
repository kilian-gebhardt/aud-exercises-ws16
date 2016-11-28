#include <stdio.h>


int main() {
  int n, i = 2;
  scanf("%i", &n);
  
  while (n > 1){
    if (n % i == 0) {
      n = n / i;
      printf("%d ", i);
    } else {
      i++;
    }    
  }
  return 0;
}
