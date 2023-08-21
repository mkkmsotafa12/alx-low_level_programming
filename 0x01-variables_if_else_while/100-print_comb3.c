#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{

	int a, b, c;

for ( a = '0'; a <= '9'; a++)

{

for ( b = '0'; b <= '9'; b++)

{

for ( c = '0'; c <= '9'; c++)

{

if ( a < b && b < c)

{

	putchar(a);

	putchar(b);

	putchar(c);

	putchar(',');

	putchar(' ');
}
}
}
}
return (0);
}
