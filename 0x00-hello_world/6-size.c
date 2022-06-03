#include<stdio.h>
int main(void) 
{  
char charType;
int intType;
long int longInt;
long long int longerInt;
float floatType;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu byte\n", sizeof(intType));
printf("Size of char: %zu byte(s)\n", sizeof(longInt));
printf("Size of char: %zu byte(s)\n", sizeof(longerInt));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));		    return (0);
}
