#include "main.h"
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;
		_print_rev_recursion(s + 1);
		_putchar(*s);
}

int main(void)
{
	char str[] = "\nColton Walker";
	_print_rev_recursion(str);

	return (0);

}
