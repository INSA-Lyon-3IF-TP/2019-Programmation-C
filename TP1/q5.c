#include <stdio.h>
#include <limits.h>

int main(){

//Tailles des types entiers
printf("sizeof(char) = %ld\n", sizeof(char)); //1
printf("CHAR_MIN = %d  -- CHAR_MAX = %d\r\n", CHAR_MIN, CHAR_MAX);
printf("sizeof(unsigned char) = %ld\n", sizeof(unsigned char)); //1
printf("UCHAR_MIN = %d  -- UCHAR_MAX = %d\r\n", CHAR_MIN, UCHAR_MAX);
printf("sizeof(int) = %ld\n", sizeof(int)); //4
printf("INT_MIN = %d  -- INT_MAX = %d\r\n", INT_MIN, INT_MAX);
printf("sizeof(unsigned long) = %ld\n", sizeof(unsigned int)); //4
printf("UINT_MIN = %u  -- UINT_MAX = %u\r\n", 0, UINT_MAX);
printf("sizeof(long) = %ld\n", sizeof(long)); //8
printf("LONG_MIN = %ld  -- INT_MAX = %ld\r\n", LONG_MIN, LONG_MAX);
printf("sizeof(unsigned long) = %ld\n", sizeof(unsigned long)); //8
printf("ULONG_MIN = %d  -- ULONG_MAX = %lu\r\n", 0, ULONG_MAX);
printf("sizeof(long long) = %ld\n", sizeof(long long)); //8
printf("sizeof(unsigned long long) = %ld\n\n", sizeof(unsigned long long)); //8


//Tailles des types décimaux
printf("sizeof(float) = %ld\n", sizeof(float)); //4
printf("sizeof(double) = %ld\n\n", sizeof(double)); //8

return 0;
}
