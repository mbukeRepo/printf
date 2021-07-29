#include "holberton.h"
unsigned int convert_di(va_list args, buffer_t *output)
{
char neg = '-';
int d;
unsigned int ret = 0;
d = va_arg(args, int);
if (d < 0)
{
ret += _memcpy(output, &neg, 1);
}
if (d != 0)
{
ret += convert_sbase(output, d, "0123456789");
}
return (ret);
}

unsigned int convert_b(va_list args, buffer_t *output)
{
unsigned int num;
num =  va_arg(args, unsigned int);
return (convert_ubase(output, num, "01"));
}


unsigned int convert_o(va_list args, buffer_t *output)
{
unsigned int long num;
unsigned int ret = 0;
num = va_arg(args, long int);
ret += convert_ubase(output, num, "01234567");
return (ret);
}


unsigned int convert_u(va_list args, buffer_t *output)
{
unsigned  long int  num;
unsigned int ret = 0;
num = va_arg(args, long int);
ret += convert_ubase(output, num, "0123456789");
return (ret);
}

