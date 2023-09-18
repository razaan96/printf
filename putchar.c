#include "main.h"
/**
*putchr - afunction
*@c:parameter
*Return:write
*/
int putchr(char c)
{
return (write(1, &c, 1));
}
