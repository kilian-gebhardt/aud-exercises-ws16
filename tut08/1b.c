#include <stdio.h>
#include <stdlib.h>

typedef struct node * tree;
typedef struct node {
  int key; 
  tree left, right;
} node;


void defol(tree * p) {
  if (*p != NULL) {
    if ((*p)->left == NULL && (*p)->right == NULL) {
      free(*p);
      *p = NULL;
    }
    else {
      defol(&((*p)->left));
      defol(&((*p)->right));
    }
  }
}

int main(){
  return 0;
}
