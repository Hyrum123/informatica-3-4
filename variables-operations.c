#include <stdio.h>

int main() {
    //rectangle
    int height = 50;
    int length = 100;
    int area = height*length;
    int perimeter = height+height+length+length;
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    //temperature
    int fahrenheit = 100;
    int celsius = (fahrenheit-32)/1.8;
    printf("\n%dºF = ", fahrenheit);
    printf("%dºC\n", celsius);

    //minutes and hours
    int mins = 349;
    int hours = mins/60;
    int extramins = mins%60;
    printf("\n%d minutes is equal to ", mins);
    printf("%d hours and ", hours);
    printf("%d minutes.\n", extramins);
}