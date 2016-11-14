#include <stdio.h>

int fib(int x) {
  if (x == 0)
    return 0;
  if (x == 1)
    return 1;
  else
    return fib(x-1) + fib(x-2);
} 

int g(int y){
  if (y == 0)
    return 0;
  else
    return y - g(g(y-1));
}

int m(int n);

int f(int n){
  if (n == 0)
    return 1;
  else
    return n - m(f(n-1));
}

int m(int n){
  if (n == 0)
    return 0;
  else
    return n - f(m(n-1));
}

int main(){
  int i; 
  printf("   i\t fib\t   G\t   F\t   M\n");
  for (i = 0; i < 15; ++i){
    printf("%4d\t%4d\t%4d\t%4d\t%4d\n", i, fib(i), g(i), f(i), m(i)g);
  }
}
