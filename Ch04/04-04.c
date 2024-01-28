#include <stdio.h>
#include <string.h>

int main() {
  char a[20];
  char b[20];
  char buffer[40];

  printf("Type a string: \n");
  fgets(a,20,stdin);
  printf("Type a second string: \n");
  fgets(b,20,stdin);

  strcpy(buffer,a);
  strcat(buffer,b);

  printf("%s", buffer);

  return(0);
}