#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main () {
  char *text;

  text = malloc(sizeof(char)*SIZE);

  if (text == NULL) {
    puts("Unable to allocate memory");
    return(1);
  }

  printf("Type your name: \n");

  fgets(text,SIZE,stdin);

  printf("Hello, %s", text);
  

}