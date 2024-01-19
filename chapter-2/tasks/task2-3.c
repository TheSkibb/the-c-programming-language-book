#include <stdio.h>

#define limit 100

void htoi(char s[]){
    for(int i = 0; i < limit && s[i] != '\0'; i++){
        s[i] = (char) s[i];
        //printf("%c", s[i]);
    }
}

int main(){
    char strArray[limit] = {'\x74', '\x65', '\x73', '\x74'};

    //printf("%s", strArray);
    htoi(strArray);

    printf("%s", strArray);

}
