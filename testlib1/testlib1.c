#include <openssl/ssl.h>

int init_testlib1(void)
{
    return OPENSSL_init_ssl(0, NULL);
}
