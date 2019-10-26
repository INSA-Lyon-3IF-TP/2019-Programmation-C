#include "bitwise.h"
#include <math.h>

char set_bit(char c, int numbit)
{
	return c | (1 << numbit);
}

char clear_bit(char c, int numbit)
{
	return c & (1 << numbit);
}
