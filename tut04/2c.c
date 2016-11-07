#include <stdio.h>

int main(){
  unsigned n, m, b;
  
  for (n = 2; n <= 1000; n++) {
    b = 1; // b == 1 gdw. noch keinen Teiler für n gefunden
    for (m = 2; m < n; m++) {
      if (n % m == 0) {
        b = 0;
        break;
      }
    }
    if (b == 1)
      printf("%d ", n); 
  }
  
  return 0;
}
