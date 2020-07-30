#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <openssl/ssl.h>

int SSL_write(SSL *context, const void *buf, int bytes) {
    int (*new_ssl_write)(SSL *context, const void *buf, int bytes);
    new_ssl_write = dlsym(RTLD_NEXT, "SSL_write");

    FILE *logfile = fopen("logfile", "a+");
    fprintf(logfile, "Process %d:\n%s\n", getpid(), (char *)buf);
    fclose(logfile);
    return(new_ssl_write(context, buf, bytes));
}