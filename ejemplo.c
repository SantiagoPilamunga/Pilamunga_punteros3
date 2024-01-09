#include <stdio.h>
int main()
{
    char *m, man;
    man= 'M';
    m= &man;
    printf("%c  %x", man,m);
    return 0;
}
