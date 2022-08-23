#include "test/ssl_helpers.h"

void test_test_callback_buffer_sanity()
{
    enum { MSGLEN = 10 };
    mbedtls_test_ssl_buffer buf;
    unsigned char input[MSGLEN];
    unsigned char output[MSGLEN];

    memset( input, 0, sizeof(input) );

    int res = mbedtls_test_ssl_buffer_put( NULL, input, sizeof( input ));
    printf("%d\n",res);
}


int main()
{
    test_test_callback_buffer_sanity();
    return 0;
}