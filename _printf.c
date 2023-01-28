#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	        return (write(1, &c, 1));
}
/**
 * _printf - to print anything passed;
 * @format: character string
 * Return: number of characters printed -'\0'
 */
int _printf(const char *format, ...)
{
	va_list ap; /*points to each unnamed arg in turn*/
	const char *p;
	char *sval, cval;
	signed int ival;

	va_start(ap, format); /*make ap point to 1st un-named arg*/
	for (p = format; *p; p++)
	{
		if (*p != '%' && *p != '\0')
		{
			_putchar(*p);
			continue;
		}
		switch (*++p)
		{
			case 'c':
				cval = va_arg(ap, int);
				_putchar(cval);
				break;
			case 's':
				for (sval = va_arg(ap, char *); *sval; sval++)
					_putchar(*sval);
				break;
			case '%':
				_putchar('%');
				break;
			case 'd':
				ival = va_arg(ap, int);
				_putchar(ival);
				break;
			case 'i':
				ival = va_arg(ap, signed int);
				_putchar(ival);
				break;
			default:
				_putchar('%');
				_putchar(*p);
				break;
		}
	}
	va_end(ap); /* clean up when done*/
	return (0);
}
