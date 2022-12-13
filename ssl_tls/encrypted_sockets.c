//
// Created by andrew mbugua on 12/5/22.
//

/*< The TLS provided by OpenSSL can be applied to any TCP socket */

#include "tls.h"

void initialize_openssl(){
    OpenSSL_add_all_algorithms();
    SSL_load_error_strings();
}

int main(){

    /* Establish a TCP connection
   int getaddrinfo(const char *restrict address,
                  const char *restrict service,
                  const struct addrinfo *restrict hints,
                  struct addrinfo **restrict res);

    socket = socket(address,type,protocol);
    connect = connect(socket,address,type);

    void freeaddrinfo(struct addrinfo *res);
   */


     /*< creates a new ssl context*/
     SSL_CTX *ctx = SSL_CTX_new(TLS_client_method());
     if(!ctx){
         fprintf(stderr, "SSL_CTX_new() failed.\n");
         return 1;
     }

    /*< Once connect has returned successfully & a TCP connection has been set up
    * Initialize a TLS connection
    * */

     SSL *ssl = SSL_new(ctx);
     if(!ctx){
         fprintf(stderr, "SSL_new() failed.\n");
         return 1;
     }

     if(!SSL_set_tlsext_host_name(ssl,hostname)){
         fprintf(stderr, "SSL_set_tlsext_host_name() failed.\n");
         ERR_print_errors_fp(stderr);
         return 1;
     }

    SSL_set_fd(ssl, socket);
     if(SSL_connect(ssl) == -1){
         fprintf(stderr,"SSL_connect() failed.\n");
         ERR_print_errors_fp(stderr);
         return 1;
     }




}