#include "holberton.h"

void cleanup(va_list args, buffer_t *output);
int run_printf(const char *format, va_list args, buffer_t *output);
int _printf(const char *format, ...);


void cleanup(va_list args, buffer_t *output)
{
va_end(args);
write(1, output->start, output->len);
free_buffer(output);
}

int run_printf(const char *format, va_list args, buffer_t *output)
{
int ret = 0;
int tmp;
int i;
unsigned int (*f)(va_list, buffer_t *);
for (i = 0; *(format + i); i++)
{
tmp = 0;
if (*(format + i) == '%')
{
f = handle_specifier(format + tmp + i + 1);
if (f != NULL)
{
i += tmp + 1;
ret += f(args, output);
continue;
}
else if (*(format + i + tmp + 1) == '\0')
{
ret = -1;
break;
}
	  
}
ret += _memcpy(output, (format + i), 1);

}
cleanup(args, output);
return (ret);
}

/**
 * _printf - prints stuff like printf
 * @format: is the format string
 * @...: arguments
 * Return: number of buffers printed on the standard output
 */
int _printf(const char *format, ...)
{
va_list args;
int ret;
 buffer_t *output;
va_start(args, format);

 output = init_buffer();
 ret = run_printf(format, args, output);
return (ret);
}
