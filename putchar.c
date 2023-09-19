#include "main.h"
/**
*putchr - a function
*@c:parameter
*Return:write
*/
int putchr(char c)
{
return (write(1, &c, 1));
}
