#include <stdio.h>

int main(){
    //replaces more than one space with only one space
    int c;

    int space = ' ';
    int spacecount = 0;

    while((c = getchar()) != EOF){
        if(c == space){
            spacecount++;
            if(spacecount == 1){
                printf("%c", c);
            }
        }
        else{
            printf("%c", c);
            spacecount = 0;
        }
    }
}
