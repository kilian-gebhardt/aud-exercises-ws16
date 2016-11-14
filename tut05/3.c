#include<stdio.h>

void swap(int* x, int* y){
  int z; 
  z = *x;
  *x = *y;
  *y = z;
}

int main(){
  int a, b;
  a = 2;
  b = 4;
  printf("a = %d und b = %d\n", a, b);
  
  swap(&a, &b);
  
  printf("a = %d und b = %d\n", a, b);
  
  return 0;
}
