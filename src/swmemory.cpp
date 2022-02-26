#include <swmemory.h>

void memcpy(void* dest, void* src, size_t num) {
	char* destC = (char*)dest;
	char* srcC = (char*)src;
	
	for(int i = 0; i < num; i++)
		destC[i] = srcC[i];
};
void memset(void* dest, uint8_t src, size_t num) {
	char* destC = (char*)dest;
	
	for(int i = 0; i < num; i++)
		destC[i] = src;
};
void memmove(void* dest, void* src, size_t num) {
	char* destC = (char*)dest;
	char* srcC = (char*)src;
	
	const int n = num;
	char temp[n];
	
	for(int i = 0; i < num; i++)
		temp[i] = srcC[i];
	
	for(int i = 0; i < num; i++)
		destC[i] = temp[i];
};
bool memcmp(void* mem1, void* mem2, size_t num) {
	char* mem1C = (char*)mem1;
	char* mem2C = (char*)mem2;
	
	for(int i = 0; i < num; i++)
		if(mem1C[i] != mem2C[i]) return false;
	
	return true;
};