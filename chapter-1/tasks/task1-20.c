#include <stdio.h>

#define LIMIT 1000
#define TABLENGTH 8

int getLine(char line[]);

// detab: replaces tabs in the input with the proper number of blanks to space to the next tab stop
int main(){

    int len;
    char line[LIMIT];

    while((len = getLine(line)) > 0){
            printf("%s", line);
    }
}

/*
 * gets a line from the input user, replaces tabs with enough spaces to reach the next tabstop.
 * returns the lenght */
int getLine(char line[]){
    char c;
    int i;

    for(i = 0; (c = getchar())!= EOF && c != '\n' && i < LIMIT; i++){
        if(c == '\t'){
            int spaces = ((i/TABLENGTH + 1) * 8) - i; //spaces left to next tabstop
            printf("%d\n", spaces);
            for(int j = i; j < i + spaces; ++j){
                printf("x\n");
                line[i] = 'x';
            }
            i += spaces;
        }
        else{
            line[i] = c;
        }
    }
    if(c == '\n'){
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;
}
