#ifndef CUSTOM_CRYPTO_LIB
#define CUSTOM_CRYPTO_LIB
#include <stdio.h>
#include <string.h>
#include <time.h>

//Functionality 1
/* Hamming weight algorithm
Counts the number of 1's in a string
Used in the calculation of parity bit which is used as a 
simple error detection in communication

*/
//Counts the number of 1 bits in a word
int number_of_1_bits_set(__uint64_t x) {
__uint64_t n;
clock_t begin = clock(); //time block of code
n = (x >> 1) & 033333333333; // Count bits in
x = x - n; // each 3-bit
n = (n >> 1) & 033333333333; // field.
x = x - n;
x = (x + (x >> 3)) & 030707070707; // 6-bit sums.
printf("%ld 1-bits counted\n", x % 63); // Add 6-bit sums.
printf("%s\n","Bit count successful");
clock_t end = clock();
double time_spent = (double)(end - begin);
printf("Exec time in ms:%f",time_spent);
}


//Functionality 2
/*One time pad - impossible to learn anything about
 the plaintext except for its length. */

int one_time_pad(char text[], int key){
printf("Original text: %s\n",text);

for(int i = 0; i <= strlen(text); i++){
 
int value = text[i] ^ key;
 
 printf("Char:%c\n",value);
 //printf("XOR'ed text:%s",xored);

}

}




#endif