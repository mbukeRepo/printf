#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);

/**
 * struct buffer_s - A new type defining a buffer struct.
 * @buffer: A pointer to a character array.
 * @start: A pointer to the start of buffer.
 * @len: The length of the string stored in buffer.
 */
typedef struct buffer_s
{
char *buffer;
char *start;
unsigned int len;
} buffer_t;

/**
 * struct converter_s - A new type defining a converter struct.
 * @specifier: A character representing a conversion specifier.
 * @func: A pointer to a conversion function corresponding to specifier.
 */
typedef struct converter_s
{
unsigned char specifier;
unsigned int (*func)(va_list, buffer_t *);
} converter_t;
unsigned int (*handle_specifier(const char *spec))(va_list ,buffer_t *);
unsigned int convert_c (va_list args, buffer_t *output);
buffer_t *init_buffer(void);
void free_buffer(buffer_t *output);
unsigned int _memcpy(buffer_t *, const char *src, unsigned int n);
unsigned int convert_s(va_list args, buffer_t *output);
unsigned int convert_percent(va_list args, buffer_t *output);
unsigned int convert_sbase(buffer_t *output, long int num,  char *base);
unsigned int convert_di(va_list args, buffer_t *output);
unsigned int convert_b(va_list args, buffer_t *output);
unsigned int convert_ubase(buffer_t *output, long int num, char *base);
unsigned int convert_o(va_list args, buffer_t *output);
unsigned int convert_x(va_list args, buffer_t *output);
unsigned int convert_X(va_list args, buffer_t *output);
unsigned int convert_u(va_list args, buffer_t *output);
unsigned int convert_S(va_list args, buffer_t *output);
unsigned int convert_p(va_list args, buffer_t *output);
#endif
