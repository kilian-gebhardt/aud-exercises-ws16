#include <stdio.h>
#include <stdlib.h>



typedef struct element * list;
typedef struct element {
  int value;
  list next;
} element;

#include "print_list.h"

int f(list l){
  int tmp;
  if (l == NULL)
    return 1;
  tmp = l->value;
  l = l->next;
  while(l != NULL) {
    int diff = tmp - l->value;
    if (diff < -1 || diff > 1)
      return 0;
    tmp = l->value;
    l = l->next;
  }
  return 1;
}

int main() {
  list l = cons(1, cons(2, cons(3, cons(5, NULL))));
  printList(l);
  printf("f(l) = %d\n", f(l));
  
  return 0;
}
