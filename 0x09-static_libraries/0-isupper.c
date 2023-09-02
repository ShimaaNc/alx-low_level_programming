#include "main.h"
/**
*_isupper - function that tells if a character is upper case or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
