//
// Created by andrew mbugua on 12/5/22.
//

//reference - Implementing SSL/TLS book. I will have to start from the top
#include "tls.h"

/* < pseudo random functions */
    static void P_hash(const unsigned char *secret,
                       __u64 secret_len,
                       const unsigned char *seed,
                       __u64 seed_len,
                       unsigned char *output,
                       __u64 out_len,
                       void (*new_digest)(digest_ctx *context)) {
        unsigned char *A;
        __u64 hash_len; //Length of the hash code in bytes
        digest_ctx A_ctx, h;
        __u64 adv;
        __u64 i;
        new_digest(&A_ctx);

    }

