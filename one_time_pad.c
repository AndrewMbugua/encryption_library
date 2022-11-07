#include <stdio.h>
#include <string.h>
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

int main(){

one_time_pad("date",10);


}