#include <stdio.h>
#include <asm-generic/types.h>
//Implement intrinsics
/* Hamming weight algorithm
Counts the number of 1's in a string
Used in the calculation of parity bit which is used as a 
simple error detection in communication

*/
//Counts the number of 1 bits in a word
int number_of_1_bits_set(__u32 x) {
__u32 n;
n = (x >> 1) & 033333333333; // Count bits in
x = x - n; // each 3-bit
n = (n >> 1) & 033333333333; // field.
x = x - n;
x = (x + (x >> 3)) & 030707070707; // 6-bit sums.
printf("%d 1-bits counted\n", x % 63); // Add 6-bit sums.
printf("%s\n","Bit count successful");
}


int main (){
    number_of_1_bits_set(255);

}
