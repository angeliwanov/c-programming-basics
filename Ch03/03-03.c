#include <stdio.h>

int main () {
  int val;

  printf("Type an integer 1,2 or 3: ");
  scanf("%d", &val);

  switch(val) {
    case 1:
      printf("Red\n");
      break;
    case 2:
      printf("Green\n");
      break;
    case 3:
      printf("Blue\n");
      break;
    default:
      printf("Not a valid number.\n");
      break;
  }

  return(0);
}
