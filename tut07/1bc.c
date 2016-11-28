#include <stdio.h>
#include <stdlib.h>

typedef struct node *tree;
typedef struct node {
  int value;
  tree left, right;
} node;

#include "print_tree.h"
int max(int a, int b){
  if (a > b)
    return a;
  return b;  
}
int height(tree t) {
  if (t == NULL)
    return 0;
  return 1 + max(height(t->left), height(t->right));
}
int isBalanced(tree t){
  if (t == NULL)
    return 1;
  int diff = height(t->left) - height(t->right);
  if (-1 > diff || diff > 1)
    return 0;
  else 
    return isBalanced(t->left) && isBalanced(t->right);
}
tree mkBal(int n){
  if (n == 0) 
    return NULL;
  tree t = malloc(sizeof(node));
  t->value = 1;   
  n--; 
  t->left = mkBal(n/2);
  t->right = mkBal(n - n/2);
  return t;
}


int main() {
  tree t = mkBal(15);
  printTree(t);
  printf("t is balanced ? %d", isBalanced(t));
  return 0;
}
