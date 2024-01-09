#include <stdio.h>
int main(int argc, char const *argv[])
{
    char A[]={'a','e','i','o','u'};
    char *ptr;
    ptr=&A[2];
    printf("%s", *ptr);

    return 0;
}
