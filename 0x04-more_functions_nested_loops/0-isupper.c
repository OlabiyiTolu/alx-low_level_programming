#include "main.h"

/**
*_isupper - check forupper case
*Description: uppercase
*Return: return 1 if upper and 0 if otherwise 
*/

int _isupper(int c)
{
if((c >= 'A') && (c <= 'Z'))
return (1);

return(0);
}