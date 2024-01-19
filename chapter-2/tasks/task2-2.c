#include <stdio.h>

#define lim 100

// rewrite the commented for loop to not use || and &&
int main(){

    char s[lim];
    int c;

    /*
    for(int i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i){
        s[i] = c;
    }
    */

    int running = 1;

    for(int i=0; running; ++i){
        if(i >= lim-1){
            running = 0;
        } 
        else if((c=getchar()) == '\n'){
            running = 0;
        }
        else if(c == EOF){
            running = 0;
        }
        else {
            s[i] = c;
        }
    }

    printf("%s\n", s);
}
