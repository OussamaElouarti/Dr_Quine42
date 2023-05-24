#include <stdio.h>

/*
    outside
*/
void prnt(char * s)
{
    printf(s,10,10,47,10,10,47,10,10,10,10,10,10,10,10,47,10,10,47,10,34,s,34,10,10,10);
}

int main(void)
{
    /*
        inside
    */
    char *s="#include <stdio.h>%c%c%c*%c    outside%c*%c%cvoid prnt(char * s)%c{%c    printf(s,10,10,47,10,10,47,10,10,10,10,10,10,10,10,47,10,10,47,10,34,s,34,10,10,10);%c}%c%cint main(void)%c{%c    %c*%c        inside%c    *%c%c    char *s=%c%s%c;%c    prnt(s);%c    return (0);%c}";
    prnt(s);
    return (0);
}