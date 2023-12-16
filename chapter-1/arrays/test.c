#include <stdio.h>

/*prints digits and their corresponding int value*/
int main(){
    for(int i = 0; i <= 9; i++){
        printf("%d: %d\n", i, '0' + i);
    }
}
