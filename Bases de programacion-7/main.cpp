#include <iostream>

void may(char& c)
{
    printf("antes c=%c\n",c);
    if(c>='a' && c<='z')
        c=c-('a'-'A');
    printf("despues c=%c\n",c);
}

int main()
{
    char x='a';
    may(x);
    printf("finalmente, x=%c\n",x);
    return 0;
}