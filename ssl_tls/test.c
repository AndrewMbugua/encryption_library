//
// Created by andrew on 12/14/22.
//

#include "tls.h"

int main(int argc, char *argv[]){
    unsigned short number;
    unsigned short short_be;
    int int_be;
    int i;

    if(argc < 2) {
        printf("Invalid number of arguments specified\n");
        return -1;
    }
    i = atoi(argv[1]);
    if(i < 0 || i > 65535)
    {
        printf("Input argument not within range 0 - 65535\n");
        return -1;
    }
    number = (unsigned short)i;
    short_be = (unsigned short)__bswap_32(i);
    int_be = __bswap_32(i);
    printf("Number waS %d, short_be was %d, int_be was %d\n",number,short_be,int_be);
}