#include <stdio.h>
#include <stdint.h>
#include "Helpers.h"

void Helpers::printHex(const void *buffer, size_t length)
{
	const unsigned char *p = (const unsigned char *) buffer;
	if (buffer == NULL) {
		printf("NULL");

	} else {
		size_t i;
		for (i = 0; i < length; i++) {
			printf("%02X", *p++);
		}
	}
	printf("\n");
}

void Helpers::printAscii(unsigned char *data, size_t length)
{
	for (int i = 0; i < length; i++) {
		printf("%c ", data[i]);
	}
}

int32_t Helpers::readInt32(unsigned char *bytes)
{
	return (int32_t) ((bytes[0] & 0xff)) |
		   ((bytes[1] & 0xff) << 8) |
		   ((bytes[2] & 0xff) << 16) |
		   ((bytes[3] & 0xff) << 24);
}
