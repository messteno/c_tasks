#include <stdio.h>

int main()
{
	int a = 135;
	a &= (a - 1);
    printf("a %d\n", a);
    return 0;
}
