#include <stdio.h>
/**
 * main - Prints var size of var type
 * return: Always 0
 */
int main(void)
{
printf("size_t of a char: %d byte(s)\n", sizeof(char));
printf("size_t of an int: %d byte(s)\n", sizeof(int));
printf("size_t of a long int: %d byte(s)\n", sizeof(long int));
printf("size_t of a long long int: %d byte(s)\n", sizeof(long long int));
printf("size_t of a float: %d byte(s)\n", sizeof(float));
return (0);
}
