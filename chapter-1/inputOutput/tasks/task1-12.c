#include <stdio.h>

#define IN 0 //inside a word
#define OUT 1 //outside a word

/* print every word in the inpu on a new line */
int main(){

    int c, words, state = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            printf("%c", '\n');
        }
        else{
            printf("%c", c);
        }
    }
}
