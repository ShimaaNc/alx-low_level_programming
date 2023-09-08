#include "main.h"

/**
*string_nconcat - Concatenates two strings.
*@s1: pointer s1.
*@s2: pointer s2.
*@n: number of bytes of s2 to concatenate to s1.
*
*Return: a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int len = n, s_len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s_len = 0; s1[s_len]; s_len++)
		len++;

	con = malloc(sizeof(char) * (len + 1));

	if (con == NULL)
		return (NULL);

	len = 0;

	for (s_len = 0; s1[s_len]; s_len++)
		con[len++] = s1[s_len];

	for (s_len = 0; s2[s_len] && s_len < n; s_len++)
		con[len++] = s2[s_len];

	con[len] = '\0';

	return (con);
}
