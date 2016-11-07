#include <stdio.h>

int main(){

  int i,j,n; //unsigned i,j,n;
  
  // n Einlesen
  scanf("%d", &n);
  
  // Gebe n mal eine Zeile aus
  for(j = 1; j <= n; j++) {
    // Gebe die j. Zeile aus
    for (i = 1; i <= n ; i++) {
      printf("\t%d", i*j);
    }
    printf("\n");
  }

  return 0;
}
