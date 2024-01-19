#include <stdio.h>

/*
in a twos complement number system, x&= (x-1) deletes the righmost bit in x, explain why.

In binary since the rightmost bit has the value of 1, taking a number -1 will create a number with this bit removed.
My observation is if we have a number, for example x = 9, x &= (x-1), we will have

    1001
&   1000
    1000

if we then take x = 8 (1000), we will have

    1000
&   0111
    0000

we now have 0 (0000), since we did two iterations of the operation, we know that 9 contains two 1 bits



Use this observation to write a faster version of bitcount.

timing bitcountOld for maxInt:
./a.out  7.46s user 0.00s system 99% cpu 7.467 total

timing bitcountNew for maxInt:
./a.out  2.65s user 0.00s system 99% cpu 2.652 total
*/

#define maxInt 111967296

// counts number of 1 bits in x
int bitcountOld(unsigned x){
    int b;
    for (b = 0; x != 0; x >>= 1){
        if(x & 01){
            b++;
        }
    }
    return b;
}

// counts number of 1 bits in x
int bitcountNew(unsigned x){
    int b;
    for (b = 0; x != 0; x &= (x-1)){
        if(x & 01){
            b++;
        }
    }
    return b;
}

int main(){
    for(int i = 0; i < maxInt; i++){
        //bitcountOld(i);
        bitcountNew(i);
    }
}
