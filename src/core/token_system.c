#include "token_system.h"

int token_count = 0;

void token_add(void) {
	token_count++;
}
void token_remove(void) {
	token_count--;
}

int get_token_count(void) {
	return token_count;
}

/* vi: set ts=4 sw=4 cindent: */
