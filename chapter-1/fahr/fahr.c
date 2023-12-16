#include <stdio.h>


float celcToFahr(float celcius){
    return (celcius * 9.0 / 5.0) + 32;
}

int main(){
    float fahr, celcius;

    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;
    printf("fahrenheit, celcius\n");
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr-32);
        printf("%10.5f %10f %10.5f\n", fahr, celcius, celcToFahr(celcius));
        fahr = fahr + step;
    }

}
