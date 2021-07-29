#include "holberton.h"

unsigned int (*handle_specifier(const char *spec))(va_list ,buffer_t *)
{
int i;
converter_t converters[] = {
{'c', convert_c},
{'s', convert_s},
{'%', convert_percent},
{'d', convert_di},
{'i', convert_di},
{'b', convert_b},
{'o', convert_o},
{'x', convert_x},
{'X', convert_X},
{'u', convert_u},
{'S', convert_S},
{'p', convert_p},
{0, NULL}
};
i = 0;
while (converters[i].func)
{
if (converters[i].specifier == *spec)
{
return (converters[i].func);
}
i++;
}
 return (NULL);
}
