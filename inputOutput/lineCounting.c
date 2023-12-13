#include <stdio.h>

int main(){

    int c, nl;

    char randomchar = 'f';

    nl = 0;

    while((c = getchar()) != EOF){
        //a character between single quotes represents the of the character in the machines character set
        if (c == '\n'){
            ++nl;
        }
    }

    printf("%d\n", nl);

}
