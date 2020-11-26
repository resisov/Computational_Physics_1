#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

int main()
{
	// Set integers and pointer
	int i,j,k,l;
	int *p = NULL;

	// input integers
	printf("input 4 integers\n");
	scanf("%d %d %d %d",&i,&j,&k,&l);
	int save;

	// change 1 -> 4 and 4 -> 1
	p = &i;
	save = l;
	l = *p;
	*p = save;

	// change 2 -> 3 and 3 -> 2
        p = &j;
        save = k;
        k = *p;
        *p = save;

	// print
	printf("%d %d %d %d\n", i,j,k,l);
	return 0;
}

