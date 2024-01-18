#include <stdio.h>

void determineInt();
void determineChar();
void determineShort();
void determineLong();

// write a program to determine the ranges of char, short int and long varibles (signed and unsigned)
int main(){
    //determineInt();
    //determineChar();
    //determineShort();
    determineLong();
}

void determineInt(){
    printf("determining int\n");
    int i = 1;
    while(i > 0){
        i++;
    }

    printf("%i\n", i-1);
    printf("%i\n", i);
}

void determineChar(){
    printf("determining char\n");
    char testChar = 1;
    while(testChar > 0){
        testChar++;
        printf("%c ", testChar);
        printf("%i\n", testChar);
    }

    printf("%i\n", testChar-1);
    printf("%hu\n", testChar);
}

void determineShort(){
    printf("determining int\n");
    short i = 1;
    while(i > 0){
        i++;
    }
    
    printf("%i\n", i);
    printf("%hu\n", i-1);
}

void determineLong(){
    printf("determining int\n");
    long i = 1;
    while(i > 0){
        i+=1000000000000000;
        printf("%lu\n", i);
    }

    printf("%lu\n", i-1);
    printf("%lu\n", i);
    printf("%i", sizeof(i)*8);
}
