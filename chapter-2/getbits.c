#include <stdio.h>

unsigned getbits(unsigned x, int p, int n){
    return (x >> (p+1-n)) & ~(~0 << n);
}

int main(){
    printf("%u\n", getbits(5, 4, 3));
}
