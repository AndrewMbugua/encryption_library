//PRNGs - Pseudorandom Number Generators
//A Popular Non-Crypto PRNG: Mersenne Twister
//Sk + 624 = Sk + 397 ⊕ A((Sk ∧ 0x80000000) ∨ (Sk + 1 ∧ 0xfffffff))
// ⊕ - denotes bitwise XOR in C(^)
// ^(in the equation) denotes AND(&) in C
//∨(in equation) denotes OR(||) in  C

//#include <asm-generic/types.h>
#include <stdio.h>
int mersenne_twister(int Sk) {

    int calculation = (Sk & 0x80000000) || (Sk + 1 & 0xfffffff);
    int result = (Sk + 397) ^ calculation;

    printf("%d",result);

}

int main(){
    mersenne_twister(10);

}