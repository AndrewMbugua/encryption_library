//
// Created by andrew mbugua on 12/2/22.
//

#ifndef ENCRYPTION_LIBRARY_TLS_H
#define ENCRYPTION_LIBRARY_TLS_H

/*< This support both pre-1.1.0 & post-1.1.0 version of OpenSSL*/
#if OPENSSL_VERSION_NUMBER < 0x10100000L
int SSL_library_init();
#else
OPENSSL_init_ssl(0, NULL);
#endif

#include <stdio.h>
#include <asm-generic/types.h>
#include <stdlib.h>
#include <openssl/evp.h>
#include <openssl/ssl.h>
#include <openssl/opensslv.h>
#include <openssl/err.h>

#include <netdb.h>
#include <sys/socket.h>
#include <sys/types.h>

#endif //ENCRYPTION_LIBRARY_TLS_H
