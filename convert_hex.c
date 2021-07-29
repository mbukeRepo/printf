#include "holberton.h"

unsigned int convert_x(va_list args, buffer_t *output)
{
unsigned long int nums;
unsigned int ret = 0;
nums = va_arg(args, long int);
ret += convert_ubase(output, nums, "0123456789abcdef");
return (ret);
}

unsigned int convert_X(va_list args, buffer_t *output)
{
unsigned long int nums;
unsigned int ret = 0;
nums = va_arg(args, long int);
ret += convert_ubase(output, nums, "0123456789ABCDEF");
return (ret);
}