#include <stdio.h>

#define MAXINP 2000

int main(){
    char line [MAXINP];
    int len;

    while((len = getline(line, MAXINP)) > 0){
        printf("%c", line[MAXINP -1]);
    }

    return 0;
}

char getline(char s[], int lim)[]{
    for(int i = 0; i < lim - 1 && (c=getchar())!=EOF; ++i){
        s[i] = c;
    }

    return i;
}
