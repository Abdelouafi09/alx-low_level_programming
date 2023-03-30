#include <ctype.h>
#include "main.h"
#include <limits.h>

int _atoi(char *s) {
	int result = 0;
	int sign = 1;
	int digit;

	/* Skip any leading non-digit characters */
	while (*s && !isdigit(*s))
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		s++;
	}

	/* Convert the remaining characters to an integer */
	while (isdigit(*s))
	{
		digit = *s - '0';
		/* Check for overflow */
		if (result > (INT_MAX - digit) / 10)
		{
			return sign > 0 ? INT_MAX : INT_MIN;
		}
		result = result * 10 + digit;
		s++;
	}

	return sign * result;
}
