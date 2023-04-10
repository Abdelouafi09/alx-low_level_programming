#include <ctype.h>
#include "main.h"
#include <limits.h>
/**
 * _atoi - convert digits in string to int
 * @s: string
 * Return: int result
 */
int _atoi(char *s)
{
  int result = 0;
  int sign = 1;
  int digit;

  while (*s && !isdigit(*s))
    {
      if (*s == '-')
	{
	  sign = -sign;
	}
      s++;
    }
  while (isdigit(*s))
    {
      digit = *s - '0';
      if (result > (INT_MAX - digit) / 10)
	{
	  return (sign > 0 ? INT_MAX : INT_MIN);
	}
      result = result * 10 + digit;
      s++;
    }
  return (sign * result);
}
