#define CHANGE 0
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char str[BUFSIZ];
	size_t len;
	gets(str);
	len = strlen(str);
	#if CHANGE
	for (int i = 0; i < len; i++)
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		else if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	#endif
	puts(str);
	return 0;
}