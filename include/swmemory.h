#pragma once

#include <swint.h>

void memcpy(void* dest, void* src, size_t num);
void memset(void* dest, uint8_t src, size_t num);
void memmove(void* dest, void* src, size_t num);
bool memcmp(void* mem1, void* mem2, size_t num);