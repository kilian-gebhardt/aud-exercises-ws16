#include <stdio.h>
#include <stdlib.h>

typedef struct node *tree;
typedef struct node {
  tree left, right;
} node;

int rank(tree t){
  if (t == NULL)
    return 0;
  if (t->right != NULL)
    return 1 + rank(t->right);
  return 1 + rank(t->left);
}

int isLeftist(tree t){
  if (t == NULL)
    return 1;
  if (rank(t->left) >= rank(t->right))
    return isLeftist(t->left) && isLeftist(t->right);
  return 0;
}

int main(){
  
  return 0;
}
