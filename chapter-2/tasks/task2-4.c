#include <stdio.h>

#define limit 1000

void squeeze2(char s1[], char s2[]){
    int i, j, k;

    for(i = 0; i < limit && s1[i] != '\0'; i++){
        for(k = 0; s2[k] != '\0' && s2[k] != s1[i]; k++){
        }
        if(s2[k] == '\0'){
            s1[j++] = s1[i];
        }

    }

    s1[j] = '\0';
}

// write an alternate version of squeeze, that deletes any character from s1 that occurs in s2
int main(){
    char str1[100] = "dette er en test";
    char str2[100] = "et";

    squeeze2(str1, str2);

    printf("%s\n", str1);
}
