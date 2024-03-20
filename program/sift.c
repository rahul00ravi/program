#include <stdio.h>

int main()
{
    unsigned int p= 60;
    unsigned int m= 4;
    unsigned int n= 2;

    p = ((~((1<<(n-1))|(1<<(m-1))))&p)|(((p>>(m-1)) << 31)>>(32-n))|(((p>>(n-1))<<31)>>(32-m));
    printf("p= %d",p);
    return 0;
}