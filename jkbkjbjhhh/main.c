#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    char*p = &x;
    *p = 1;
    p++;
    printf("%d",x);
    return 0;
}
