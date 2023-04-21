#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sepr = "";
	va_list liste;

	va_start(liste, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sepr, va_arg(liste, int));
					break;
				case 'i':
					printf("%s%d", sepr, va_arg(liste, int));
					break;
				case 'f':
					printf("%s%f", sepr, va_arg(liste, double));
					break;
				case 's':
					str = va_arg(liste, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sepr, str);
					break;
				default:
					i++;
					continue;
			}
			sepr = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(liste);
}
