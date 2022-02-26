#pragma once

#include <swint.h>

struct typeinfo {
	const char* name;
};

#define typeof(type) typeinfo { .name = #type }
