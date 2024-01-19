#include <stdio.h>

#define limit 100

int any(char s1[], char s2[]){
    int i, j, k;

    for(i = 0; i < limit && s1[i] != '\0'; i++){
        for(k = 0; s2[k] != '\0' && s2[k] != s1[i]; k++){
        }
        if(s2[k] != '\0'){
            return i;
        }
    }

    return -1;
}


//write a function which return the first location of the first string where there occures any character of the second string
int main(){
    char s1[limit] = "dette er en test";
    char s2[limit] = "test";

    printf("%i\n", any(s1, s2));
}
