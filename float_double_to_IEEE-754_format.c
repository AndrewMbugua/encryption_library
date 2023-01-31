//
// Created by andrew mbugua on 1/31/23.
//
#define pack754_32(f) (pack754((f), 32, 8))
#define pack754_64(f) (pack754((f), 64, 11))
#define unpack754_32(i) (unpack754((i), 32, 8))
#define unpack754_64(i) (unpack754((i), 64, 11))

uint64_t pack754(long double f, unsigned bits, unsigned expbits)
{
    long double fnorm;
    int shift;
    long long sign, exp, significand;
    unsigned significandbits = bits - expbits - 1; // -1 for sign bit

    if (f == 0.0) return 0; // get this special case out of the way

// check sign and begin normalization
    if (f < 0) { sign = 1; fnorm = -f; }
    else { sign = 0; fnorm = f; }
    15
    16
    17
    18
// get the normalized form of f and track the exponent
    shift = 0;
    while(fnorm >= 2.0) { fnorm /= 2.0; shift++; }
    while(fnorm < 1.0) { fnorm *= 2.0; shift--; }
    fnorm = fnorm - 1.0;
    19
    20
    21
    22
    23
    24
// calculate the binary form (non-float) of the significand data
    significand = fnorm * ((1LL<<significandbits) + 0.5f);
    25
    26
    27
// get the biased exponent
    exp = shift + ((1<<(expbits-1)) - 1); // shift + bias
    28
    29
    30
// return the final answer
    return (sign<<(bits-1)) | (exp<<(bits-expbits-1)) | significand;
    31
    32
    33
}
34
35
36
37
long double unpack754(uint64_t i, unsigned bits, unsigned expbits)
{
    long double result;