#include <stdio.h>

void change(int input[]){
    for(int i = 0; i < 100; ++i){
        input[i] = i;
    }
}

/*testing if arrays are modified when passed as arguments*/
int main(){

    int test[100];

    change(test);

    printf("%d", test[1]);

}

/*
 * arrays are modified when passed to a function, because what you are actually passing is a pointer to the function
 */
