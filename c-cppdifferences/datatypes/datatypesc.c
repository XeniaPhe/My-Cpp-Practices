#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Size of char : %d byte\n",sizeof(char));
    printf("Size of wide char : %d bytes\n",sizeof(wchar_t));
    printf("Size of void : %d byte\n",sizeof(void));
    printf("Size of short : %d bytes\n",sizeof(short));
    printf("Size of short int : %d bytes\n",sizeof(short int));
    printf("Size of int : %d bytes\n",sizeof(int));
    printf("Size of long : %d bytes\n",sizeof(long));
    printf("Size of long int : %d bytes\n",sizeof(long int));
    printf("Size of long long : %d bytes\n",sizeof(long long));
    printf("Size of long long int : %d bytes\n",sizeof(long long int));
    printf("Size of float : %d bytes\n",sizeof(float));
    printf("Size of double : %d bytes\n",sizeof(double));
    printf("Size of long double : %d bytes\n",sizeof(long double));
    return 0;
}