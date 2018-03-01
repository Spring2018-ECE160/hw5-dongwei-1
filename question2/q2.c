#include <stdio.h>

#define BUFFER 10000

void strcat(char *, char *);

int main(int argc, char *argv[])
{
        char string1[BUFFER] = "Hello";
        char string2[BUFFER] = "World!";

        printf ("String 1: %s\n", string1);

        strcat(string1, string2);

        printf ("String 2: %s\n", string2);
        printf ("Result: %s\n", string1);

        char string3[BUFFER] = "12345";
        char string4[BUFFER] = "67890";

        printf ("String 1: %s\n", string3);

        strcat(string3, string4);

        printf ("String 2: %s\n", string4);
        printf ("Result: %s\n", string3);

        char string5[BUFFER] = "I am taking";
        char string6[BUFFER] = "ECE160";

        printf ("String 1: %s\n", string5);

        strcat(string5, string6);

        printf ("String 2: %s\n", string6);
        printf ("Result: %s\n", string5);

        return 0;
}


void strcat(char *s, char *t)
{
      
        while(*s++); 
        s--;           
        while((*s++ = *t++));
}