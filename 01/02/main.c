#include <stdio.h>

int main()
{
	int a = 135;
	a ^= 1 << 3;
    printf("a %d\n",a);
    return 0;
}
