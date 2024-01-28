#include <stdio.h>

int main () {
  int i;

  for (i=0;i<20;i++) {
    printf("%d\n", i+1);
  }

  int x = -10;

  while (x<=10) {
    printf("%d\n", x);
    x = x + 2;
  }

  return(0);
}