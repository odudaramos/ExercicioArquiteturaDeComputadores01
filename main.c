#include <stdio.h>
#include <inttypes.h>

union T{

		uint32_t palavra;
		uint8_t bytes[4];
};


int main(void)
{
	union T p;
	p.palavra = 0xAABBCCDD;
	printf("Byte [0] %X\n", p.bytes[0]);

}