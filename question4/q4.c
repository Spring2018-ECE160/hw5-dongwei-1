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

void strncat(char *s, char *t, int n)
{
	void strncpy(char *s, char *t, int n);
	int strlen(char *);

	strncpy(s+strlen(s),t,n);
}

int strncmp(char *s, char *t, int n)
{
	for ( ; *s == *t; s ++, t ++)
		if (*s == '\0' || --n <= 0)
			return 0;
	return *s - *t;
}

int strlen(char *s)
{
    int n;

    for (n=0; *s != '\0'; s++)
        n++;
    return n;
}