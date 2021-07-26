#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
va_list args;
int ret;
va_start(args, format);
ret = vprintf(format, args);
va_end(args);
return (ret);
}
