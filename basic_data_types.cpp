// hacker rank challenge
// "basic data types" 

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    /*
    Int ("%d"): 32 Bit integer
    Long ("%ld"): 32 bit integer (same as Int for modern systems)
    Long Long ("%lld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value
    */
    //--input:
    //  3 444 12345678912345 a 334.23 14049.30493
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;
    //get input
    scanf("%d %ld %lld %c %f %lf", &a, &b, &c, &d, &e, &f);
    //print output
    printf("%d",    a); std::cout << std::endl;
    printf("%ld",   b); std::cout << std::endl;
    printf("%lld",  c); std::cout << std::endl;
    printf("%c",    d); std::cout << std::endl;
    printf("%f",    e); std::cout << std::endl;
    printf("%lf",   f);
   return 0;
}

