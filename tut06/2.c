#include <stdio.h>
#include <stdlib.h>

typedef struct element *list;
struct element {
	int value;
	list next;
};

#include "print_list.h"
int sum_it(list l){
  int summe = 0;
  while (l != NULL) {
    summe += l->value;
    l = l -> next;
  } 
  return summe;
}

int sum(list l) {
  if (l == NULL) 
    return 0;
  return l->value + sum(l->next);
}

void rmEvans(list * l) {
  list h;
  // Basisfall Liste leer
  if (*l == NULL)
    return;
  // erstes Element gerade
  if ((*l)->value % 2 == 0) {
    h = *l;
    *l = (*l)->next;
    free(h);
    rmEvans(l);
    return;
  }
  // erstes Element ungerade
  rmEvans(&((*l)->next));
}

void rmEvans_it(list * l) {
  list tmp;
  while (*l != NULL) {
    if ((*l)->value % 2 == 0) {
      tmp = *l;
      *l = (*l)->next;
      free(tmp);
    } else {
      l = &((*l)->next);
    }
  }
}



int main()
{
	list l = cons(8, cons(1, cons(2, cons(3, cons(7, cons(2, NULL))))));

	printList(l);
	
	// printf("Summe: %d\n", sum_it(l));
	rmEvans_it(&l);
	
	printList(l);

	return 0;
}

