#ifndef MAIN_H
#define MAIN_H

enum {SUCCESS, FAIL};

#include <stdio.h>
void size_double(void);
void arr_int(int a[]);
void concatenate_string(char *s, char *s1);
int power(int a, int b);
char _putchar(char c);
void _puts_test_recursion(char *s, int len);
void help_print(char *sh, int i, int len);
int _strlen(char *s);
int __strlen(char *s1, char *s2, int *len_s1, int *len_s2);
char *str_concat(char *s1, char *s2);
void CharReadWrite(FILE *fin, FILE *fout);

#endif /* MAIN_H */
