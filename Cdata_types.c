#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

   printf("The number of bits in a byte %d\n", CHAR_BIT);

   printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

   printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
   printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 

   printf("The minimum value of INT = %d\n", INT_MIN);
   printf("The maximum value of INT = %d\n", INT_MAX);

   printf("The minimum value of CHAR = %d\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\n", CHAR_MAX);

   printf("The minimum value of LONG = %ld\n", LONG_MIN);
   printf("The maximum value of LONG = %ld\n", LONG_MAX);
   
   printf("The minimum value of DOUBLE = %g\n", DBL_MIN);
   printf("The maximum value of DOUBLE = %g\n", DBL_MAX);
  
   printf("The minimum value of LONG DOUBLE = %d\n", LDBL_MIN);
   printf("The maximum value of LONG DOUBLE = %d\n", LDBL_MAX);
   
   
   
   printf("The minimum value of int8_t = %d\n", SCHAR_MIN);
   printf("The maximum value of int8_t = %d\n", SCHAR_MAX);
   
   printf("The minimum value of int16_t = %d\n", SHRT_MIN);
   printf("The maximum value of int16_t = %d\n", SHRT_MAX);
   
   printf("The minimum value of int32_t = %d\n", INT_MIN);
   printf("The maximum value of int32_t = %d\n", INT_MAX);
  
   printf("The minimum value of int64_t = %lld\n", LLONG_MIN);
   printf("The maximum value of int64_t = %lld\n", LLONG_MAX);
  
  
   printf("The minimum value of uint8_t = %d\n", 0);
   printf("The maximum value of uint8_t = %d\n", UCHAR_MAX);
   
   printf("The minimum value of uint16_t = %d\n", 0);
   printf("The maximum value of uint16_t = %d\n", USHRT_MAX);
   
   printf("The minimum value of uint32_t = %d\n", 0);
   printf("The maximum value of uint32_t = %u\n", UINT_MAX);
  
   printf("The minimum value of uint64_t = %d\n", 0);
   printf("The maximum value of uint64_t = %llu\n", ULLONG_MAX);
   return(0);
}