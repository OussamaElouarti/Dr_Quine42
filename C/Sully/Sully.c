#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char *str = "#include <stdio.h>%c#include <string.h>%c#include <unistd.h>%c#include <stdlib.h>%c%cint main()%c{%c    char *str = %c%s%c;%c    int i = %d;%c    if (strchr(__FILE__,i+%c0%c)!= NULL) i--;%c    if(i>=0)%c    {%c        char s[10];%c        sprintf(s,%cSully_%%d.c%c,i);%c        char out[9];%c        sprintf(out,%cSully_%%d %c,i);%c        FILE *file = fopen(s,%cw%c);%c        fprintf(file, str,10,10,10,10,10,10,10,34,str,34,10,i,10,39,39,10,10,10,10,34,34,10,10,34,34,10,34,34,10,10,10,34,34,10,10,10,10,10,10,10,34,34,10,10,10,10,10);%c        fclose(file);%c        char *command = %cclang -Wextra -Werror -Wall -o %c;%c        char * string = malloc(strlen(s)+strlen(command)+strlen(out)+1);%c        strcpy(string, command);%c        strcat(string, out);%c        strcat(string, s);%c        system(string);%c        char outt[10];%c        sprintf(outt, %c./Sully_%%d%c,i);%c        system(outt);%c    }%c    return (0);%c}";
    int i = 5;
    if (strchr(__FILE__,i+'0')!= NULL) i--;
    if(i>=0)
    {
        char s[10];
        sprintf(s,"Sully_%d.c",i);
        char out[9];
        sprintf(out,"Sully_%d ",i);
        FILE *file = fopen(s,"w");
        fprintf(file, str,10,10,10,10,10,10,10,34,str,34,10,i,10,39,39,10,10,10,10,34,34,10,10,34,34,10,34,34,10,10,10,34,34,10,10,10,10,10,10,10,34,34,10,10,10,10,10);
        fclose(file);
        char *command = "clang -Wextra -Werror -Wall -o ";
        char * string = malloc(strlen(s)+strlen(command)+strlen(out)+1);
        strcpy(string, command);
        strcat(string, out);
        strcat(string, s);
        system(string);
        char outt[10];
        sprintf(outt, "./Sully_%d",i);
        system(outt);
    }
    return (0);
}