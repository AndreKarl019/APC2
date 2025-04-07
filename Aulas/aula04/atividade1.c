#include <stdio.h>

int main(){
    char s[] = "maria", *ptr = s;

    printf("%p, %p %p", (ptr+1), s, &s[0]);



    /* VALOR   |     USANDO S        |    USANDO PTR
         r     |  s[2]    *(s+2)     | *(ptr+2)
        1000   |  &s[0]   s          | ptr
        1001   |  &s[1]    s+1       | *(ptr+1)
        5000   | &s[4000]   s+4000   | &ptr
    */
    return 0;
}