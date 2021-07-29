#include "holberton.h"

unsigned int convert_s(va_list args, buffer_t *output)
{
char *s, *null = "(null)";
int ret = 0;
int size;
s = va_arg(args, char *);
if (s == NULL)
{
return (_memcpy(output, null, 6));
}
size = 0;
while (*(s + size))
{
size++;
}
while (*s != '\0')
{
ret += _memcpy(output, s, 1); 
s++;
}
return (ret);
}

unsigned int convert_S(va_list args, buffer_t *output)
{
char *s, *null = "(null)", *hex = "\\x", zero = '0';
unsigned int ret = 0;
int index = 0;
s = va_arg(args, char *);
if (s == NULL)
{
return (_memcpy(output, null, 6));
}

while (*(s + index) != '\0')
{
if (*(s + index) < 32 || *(s + index) >= 127)
{
ret += _memcpy(output, hex, 2);
if (*(s + index) < 16)
{
ret += _memcpy(output, &zero, 1);
}
ret += convert_ubase(output, *(s + index), "0123456789ABCDEF");
index++;
continue;
}
ret += _memcpy(output, (s + index), 1);
index++;
}

return (ret);
}