#include <stdio.h>

void squeeze(char s[], int c){
    int i, j;

    for(i=j=0; s[i] != '\0'; i++){
        if (s[i] != c){
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

int main(){
    char str[] = "tcecsct";

    int c = 'c';
    squeeze(str, c);

    printf("%s\n", str);
    printf("%lu\n", sizeof(str));

}
