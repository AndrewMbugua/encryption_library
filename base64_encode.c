//
// Created by andrew mbugua on 12/7/22.
//

/*< Base64 is a group of similar binary-text encoding schemes that represents binary data in an ASCII
 * string format by translating it into a radix-64 representation */

/*< I want to represent binary in a compact textual representation that is printable.
 * 6 bits get mapped into 1 character output.
 * Note that four output characters map exactly to three input characters. As a result,
 * if the input string isn't a multiple of three characters, you'll need to do some padding.
 */

#include "base64_encode.h"

/*< accepts a binary buffer with an associated size
 * Returns a base64 encoded NULL terminated string
*/

unsigned char *spc_base64_encode(unsigned char *input, size_t len, int wrap){
    unsigned char *output, *p;


}





int main(){

}