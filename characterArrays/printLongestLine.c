#include <stdio.h>

#define MAXLINE 1000

int kgetline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = kgetline(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0){
        printf("%s", longest);
    }

    return 1;
}

/* getline: read a line into s, return length */
int kgetline(char s[], int lim){
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }

    if(c=='\n'){
        s[i] = 0;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume its big enough */
void copy(char to[], char from[]){
    int i = 0;

    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}
