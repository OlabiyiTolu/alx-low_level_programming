#include "main.h"

/*
 * _memset - function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: first n byte
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n) {
  char *p = s;
  while (n--) {
    *p++ = b;
  }
  return s;
}

