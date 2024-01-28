#include <stdio.h>

#define LENGTH 5

int main()
{
	char names[5][9] = {
		"Ant",
		"Bee",
		"Cat",
		"Duck",
		"Elephant"
	};
	int x;

	for(x=0;x<LENGTH;x++)
		printf("%s\n",names[x]);

	return(0);
}

