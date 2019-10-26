#include "bitwise.h"
#include <stdio.h>

int main()
{
	char bitfield = 0b11111111;
	printf("%c\r\n", bitfield);
	bitfield = clear_bit(bitfield, 3);
	printf("%c\r\n", bitfield);
	bitfield = set_bit(bitfield, 3);
	printf("%c\r\n", bitfield);
}
