#include <stdio.h>

// value, left, right

void printTreeHelper(tree t, int level, unsigned int branches) {
  int i;
  if (level > 0) {
    for (i = 0; i < level - 1; ++i) {
      if (branches & (1 << i)) {
        printf("│ ");
      } else {
        printf("  ");
      }
    }
    if (branches & (1 << i)) {
      printf("├ ");
    } else {
      printf("└ ");
    }
  }
  if (t == NULL) {
    printf("NULL\n");
  } else {
    printf("%i\n", t->value);
    if (t->left || t->right) {
      printTreeHelper(t->left, level + 1, branches | (1 << level));
      printTreeHelper(t->right, level + 1, branches);
    }
  }
}


void printTree(tree t) {
  printTreeHelper(t, 0, 0);
}
