#include "s21_string.h"

void *s21_memset(void *src, int c, s21_size_t n) {
  unsigned char *s1 = src;
  for (s21_size_t i = 0; i < n; i++) {
    s1[i] = c;
  }
  return s1;
}