#include <stdio.h>

#define buff 100

void strncpy(char *s, char *t, int n);



int main(void)
{
	char s[buff];
	char *t ="FGHIJKLMNOP";

	strncpy(s,t,5);
	printf("String t is %s, String s is %s\n",t,s);
	
	char q[buff];
	char *tt ="FGHIJKLMNOP";

	strncpy(q,tt,7);
	printf("String t is %s, String s is %s\n",t,q);
	char ss[buff];
	char *ttt ="FGHIJKLMNOP";

	strncpy(ss,ttt,9);
	printf("String t is %s, String s is %s\n",t,ss);
}





void strncpy(char *s, char *t, int n)
{
	while (*t && n-- > 0)
		*s++ = *t ++;
	while (n -- > 0)
		*s++ = '\0';
}
