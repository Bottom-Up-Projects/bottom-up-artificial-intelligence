#include "decimal.h"

int main(int argc, char const *argv[])
{
    gmp_t a, b, c, d, e;
    a =  "1";
    b =  "234567891234567891234567891234567891234567891234567891234567891234567890";
    c =  "999999999999999999999999999999999999999999999999999999999999999999999999";
    d = "1000000000000000000000000000000000000000000000000000000000000000000000000";
    e = "1234567891234567891234567891234567891234567891234567891234567891234567890";
    cout << a + c << endl;
    cout << a + b + c << endl;
    cout << d + b << endl;

    return 0;
}