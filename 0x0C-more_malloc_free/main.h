#ifndef FILE_MAIN
#define FILE_MAIN
#include <stdlib.h>
#include <stddef.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int onlyNumbers(char *c);
void multiply(char *s1, char *s2);
void errors(void);
int _strlen(char *s);
#endif
