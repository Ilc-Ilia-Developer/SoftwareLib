#include <swstring.h>

size_t strlen(char* str) {
	size_t res = 0;
	while(*str != '\0') {
		str++;
	}
	return res;
};
