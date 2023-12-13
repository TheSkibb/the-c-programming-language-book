#include <stdio.h>

/* print a bar chart of the length of different words (primitive implementation) */
int main(){
    int c, state, char_count= 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t'){
            for(int i = 0; i <= char_count; i++){
                printf("#");
            }
            printf("%d", char_count);
            printf("\n");
            char_count = 0;
        }
        else if (c == '\n') {
            for(int i = 0; i <= char_count; i++){
                printf("#");
            }
            printf("%d", char_count);
            printf("\n");
            char_count = 0;
        }
        else{
            ++char_count;
        }
    }
}
