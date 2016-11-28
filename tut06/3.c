typedef struct node * tree;
typedef struct node {
  int key; 
  tree left, right;
} node;

#include "print_tree.h"

int count(tree t, int key) {
  if (t == NULL)
    return 0;
  if (t->key == key)
    return 1 + count(t->left, key) + count(t->right, key);
  else
    return count(t->left, key) + count(t->right, key);
}

tree baz(tree s, tree t) {
  if (s == NULL)
    return s;
  tree s2 = malloc(sizeof(node));
  s2->key = count(t, s->key);
  s2->left = baz(s->left, t);
  s2->right = baz(s->right, t);
  return s2;
}

int leafprod(tree t){
  if (t == NULL)
    return 1;
  if (t->left == NULL && t->right == NULL)
    return t->key;
  if (t->left != NULL || t->right != NULL)
    return leafprod(t->left) * leafprod(t->right);
}

int main() {
  tree s = mktree(2, mktree(3, mktree(2, NULL, NULL), mktree(4, NULL, NULL)), mktree(1, NULL, NULL));
  tree t = mktree(2, mktree(2, NULL, NULL), mktree(3, NULL, NULL));
  printTree(s);
  printTree(t);
  printTree(baz(s,t));
  printf("leafprod(s)=%d\n", leafprod(s));
  return 0;
}
