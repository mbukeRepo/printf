#include "holberton.h"



unsigned int convert_sbase(buffer_t *output, long int num,  char *base)
{
int size;
char dig;
unsigned int ret = 1;
for (size = 0; *(base + size); )
{
size++;
}
if (num >= size || num <= -size)
{
ret += convert_sbase(output, num / size, base);
}
dig = base[((num < 0) ? -1 : 1) * (num % size)];
_memcpy(output, &dig, 1);
return (ret);
}



unsigned int convert_ubase(buffer_t *output, long int num, char *base)
{
unsigned int size, ret = 1;
char dig;
for (size = 0; *(base + size); )
{
size++;
}
if (num >= size)
{
ret += convert_ubase(output, num / size, base);
}
dig = base[(num % size)];
_memcpy(output, &dig, 1);
return (ret);
}