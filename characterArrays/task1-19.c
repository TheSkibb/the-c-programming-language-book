#include <stdio.h>

#define LIMIT 10000

int getLine(char s[], int lim);
int reverseArray(char line[], char rev[], int len);

// gets a character from input and prints a reversed version
int main(){
    int len;
    char line[LIMIT];
    char reversed[LIMIT];

    while((len = getLine(line, LIMIT)) > 0){
        reverseArray(line, reversed, len);
        printf("%s\n", reversed);
    }

}

// reverses a character array line
int reverseArray(char line[], char rev[], int len){
    int i;
    for(i = 0; i < len; ++i){
        rev[i] = line[len-i-1];
        //printf(":%c:%d:%c:%c\n", line[i], i, line[len-i-1], rev[i]);
    }
    return 0;
}

// get character array from input
int getLine(char s[], int lim){
    int i;
    char c;

    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    return i;
}
