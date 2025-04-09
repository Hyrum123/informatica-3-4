#include <stdio.h>

int main() {
    //rectangle

    int height;
    int length;
    printf("Enter a rectangle height: ");
    scanf("%d", &height);
    printf("Enter a rectangle length: ");
    scanf("%d", &length);
    int area = height*length;
    int perimeter = height+height+length+length;
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n\n", perimeter);

    //temperature
    int fahrenheit;
    printf("Enter a degree in fahrenheit: ");
    scanf("%d", &fahrenheit);
    int celsius = (fahrenheit-32)/1.8;
    printf("%dºF = ", fahrenheit);
    printf("%dºC\n\n", celsius);

    //minutes and hours
    int mins;
    printf("Enter a number of minutes: ");
    scanf("%d", &mins);
    int hours = mins/60;
    int extramins = mins%60;
    printf("%d minutes is equal to ", mins);
    printf("%d hours and ", hours);
    printf("%d minutes.\n\n", extramins);

    int radius;
    printf("Enter a radius of a circle: ");
    scanf("%d", &radius);
    int circleArea = 3.14*(radius^2);
    printf("The are of the circle is: %d\n\n", circleArea);
}