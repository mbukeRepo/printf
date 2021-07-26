#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
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
va_start(args, format);
ret = vprintf(format, args);
va_end(args);
return (ret);
}
