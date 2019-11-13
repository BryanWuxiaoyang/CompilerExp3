#pragma once
#include "MyList.h"
enum TypeKind{ BASIC, ARRAY, STRUCTURE};
typedef enum TypeKind TypeKind;

struct _Type_ {
	char* name;
	TypeKind kind;
	union {
		int basic;
		struct { struct _Type_* elemType; int size; } array;
		ListHead fieldList;
	} u;
};
typedef struct _Type_* Type;