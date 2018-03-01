#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main()
{
	char *s ="the class is over.";
	char *t ="over";

	if (strend(s,t))
		printf("The text '%s' is the same as the end of string '%s'\n", t,s);
	else
		printf("The ends are not the same:%s, %s\n", t,s);

	char *ss ="the class is over.";
	char *tt ="over.";

	if (strend(ss,tt))
		printf("The text '%s' is the same as the end of string '%s'\n", tt,ss);
	else
		printf("The ends are not the same:%s, %s\n", tt,ss);

	char *sss ="ECE160 is a difficult class";
	char *ttt ="s";

	if (strend(sss,ttt))
		printf("The text '%s' is the same as the end of string '%s'\n", ttt,sss);
	else
		printf("The ends are not the same:%s, %s\n", ttt,sss);
}


int strend(char *s, char *t)
{

	char *ends = s;
	char *endt = t;

	for ( ; *s; s++)
		;
	for ( ; *t; t++)
		;
	for ( ; *s == *t; s --, t --)
		if (t == endt || s == ends)
			break;
	if (*s == *t && t == endt && *s != '\0')
		return 1;
	else
		return 0;
}