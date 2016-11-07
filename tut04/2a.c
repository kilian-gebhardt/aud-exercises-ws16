#include <stdio.h>

int main(){
  char name[100];
  
  printf("Wie heisst du?\n");
  scanf("%s", name);
  
  printf("Hallo, %s.\n Hallo, %s!", name, name);
  return 0;
}
