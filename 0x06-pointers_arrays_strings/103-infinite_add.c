#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to result or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum = 0, carry = 0, i = 0, j = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	len1--, len2--, size_r--;
	for (; len1 >= 0 || len2 >= 0; len1--, len2--, i++)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';
		if (i >= size_r)
			return (0);
		carry = sum / 10;
		r[i] = (sum % 10) + '0';
	}
	if (carry > 0)
	{
		if (i >= size_r)
			return (0);
		r[i++] = carry + '0';
	}
	if (i == size_r)
		return (0);
	r[i] = '\0';
	for (j = 0, i--; j < i; j++, i--)
	{
		char tmp = r[j];
		r[j] = r[i];
		r[i] = tmp;
	}
	return (r);
}
