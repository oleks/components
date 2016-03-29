#include "stack.h"

#include <stddef.h> // size_t

struct stack {
  int values[STACK_SIZE];
  size_t count;
} STACK;

int
stack_push(int value) {
  if (STACK.count == STACK_SIZE) {
    return STACK_OVERFLOW;
  }

  STACK.values[STACK.count++] = value;
  return 0;
}

int
stack_pop(int *value) {
  if (STACK.count == 0) {
    return STACK_UNDERFLOW;
  }

  *value = STACK.values[--STACK.count];
  return 0;
}
