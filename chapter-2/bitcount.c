#include <stdio.h>

// counts number of 1 bits in x
int bitcount(unsigned x){
    int b;
    for (b = 0; x != 0; x >>= 1){
        if(x & 01){
            b++;
        }
    }
    return b;
}

int main(){
    printf("%i\n", bitcount(1));
    printf("%i\n", bitcount(2));
    printf("%i\n", bitcount(3));
    printf("%i\n", bitcount(4));
    printf("%i\n", bitcount(400000));
}
