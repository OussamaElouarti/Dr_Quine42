#include <stdio.h>
#define S "#include <stdio.h>%c#define S %c%s%c%c#define B %cGrace_kid.c%c%c#define FT(X,Y) int main(){FILE *b=fopen(Y,%cw%c);fprintf(b, X,10,34,X,34,10,34,34,10,34,34,10,10,47,10,10,47,10);return(0);}%c%c%c*%c    call to the macro function%c*%c%cFT(S,B)"
#define B "Grace_kid.c"
#define FT(X,Y) int main(){FILE *b=fopen(Y,"w");fprintf(b, X,10,34,X,34,10,34,34,10,34,34,10,10,47,10,10,47,10);return(0);}

/*
    call to the macro function
*/
FT(S,B)