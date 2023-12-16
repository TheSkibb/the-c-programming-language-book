#include <stdio.h>

int main(){
    int count = 0;
    int c;

    //blanks
    //int count_value = ' ';

    //tab
    //int count_value = '\t';

    //newlines
    int count_value = '\n';



    while((c = getchar()) != EOF){
        //printf("%d", c);
        if(c == count_value){
            count++;
        }
    }

    printf("%d", count);
}
