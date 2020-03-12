#include "swap.h"

void Swap(char *left, char *right)
{
	char boop = *left;
    *left=*right;
    *right=boop;
}
