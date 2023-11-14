#include "../main.h"

/**
 * main - Testing Task 0 : 'c' , 's' , '%'
 *
 * Return: Always 0
 */
int main(void)
{
	int len0, len1;
    printf("%%\n");
	_printf("%%\n");
	printf("%\0\n");*/
	_printf("%\0\n");*/
	printf("% \n");
	_printf("% \n");
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	len0 = printf("print- complete the senence :you %s nothing, Jon Snow.\n", "Know");
	len1 = _printf("print- complete the senence :you %s nothing, Jon Snow.\n", "Know");
	printf("%c\n", 'S');
	_printf("%c\n", 'S');
	printf("%d\n", len0);
	_printf("%d\n", len1);
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("%s%c%c%c%s\n", "shit",'.',',',':',"shit");
	_printf("%s%c%c%c%s\n", "shit",'.',',',':',"shit");
	printf("%scc%cscc%csc%ccc%sS\n", "shit",'.',',',':',"shit");
	_printf("%scc%cscc%csc%ccc%sS\n\n", "shit",'.',',',':',"shit");
	printf("A char inside a sentence: %s. Did it work?\n", "heloo wke lkdfj ldfjsd kldjfsd ljdfsdk lldfjsd ldjdfks djfkslfjslkdfjskdlfjslfjsldkfjskljfsdkjsflkf");
	printf("A char inside a sentence: %s. Did it work?\n", "heloo wke lkdfj ldfjsd kldjfsd ljdfsdk lldfjsd ldjdfks djfkslfjslkdfjskdlfjslfjsldkfjskljfsdkjsflkf");
	return (0);
}
