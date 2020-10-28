#include "holberton.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
 char c = 'h';
 char str[] = "julian";
 unsigned int ui;
 int len, len2;


	len = _printf("%d\n",-123456789);
	_printf("%i\n", len);
	_printf("%i\n",INT_MAX);
 printf("en printf normal:%d\n",INT_MAX);
_printf("%d\n",INT_MIN);
printf("print normal:%d\n",INT_MIN);
len2 = _printf("%d\n",0);
_printf("%d\n",len2);

	printf("probando \"algo\"");
_printf("probando \"algo\"");
	_printf("Hola que %c tal %s, es %% xd\n",c,str);
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
 _printf("%c%c",c,str);
 _printf("Let's try to printf a simple sentence.\n");
     printf("Let's try to printf a simple sentence.\n");
 _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
	_printf("I am a binary %b\n",2193812);
_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
  _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
 _printf("Unknown:[%r]a\n","que mogolico");
  _printf("Unknown:[%R]\n", "probando rot13");
len = _printf("%d\n",12345);
len2 = printf("%d\n",len);
_printf("%d\n",len2);
return(0);
}
