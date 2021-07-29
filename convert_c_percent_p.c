#include "holberton.h"

unsigned int convert_c (va_list args, buffer_t *output)
{
char c;
unsigned int ret = 0;
c = va_arg(args, int);
ret += _memcpy(output, &c, 1);
 return (ret);
}



unsigned int convert_percent(va_list args, buffer_t *output)
{
char perc = '%';
unsigned int ret = 0;
(void)args;

ret += _memcpy(output, &perc, 1);
return (ret);
}

unsigned int convert_p(va_list args, buffer_t *output)
{
char *null = "(nil)";
unsigned long int address;
unsigned int ret = 0;
address = va_arg(args, long int);
if (address == '\0')
{
return (_memcpy(output, null, 5));
}
ret += convert_ubase(output, address, "0123456789abcdef");
return (ret);
}
