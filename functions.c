#include <stdio.h>

float calculateAge(float a, float p);

int main() {
    const float planets[] = {0, 0.24, 0.61, 1, 1.88, 11.86, 29.44, 84.01, 164.79};
    const char* planetNames[] = {"0 Ain't no choice", "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    const float mercury = 0.2408467;
    const float venus = 0.61519726;
    const float earth = 1;
    const float mars = 1.8808158;
    const float jupiter = 11.862615;
    const float saturn = 29.447498;
    const float uranus = 84.016846;
    const float neptune = 164.79132;

    int age, planet;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Select a planet to see your age if you lived on that planet\n1. Mercury\n2. Venus\n3. Earth\n4. Mars\n5. Jupiter\n6. Saturn\n7. Uranus\n8. Neptune\nEnter an option: ");
    scanf("%d", &planet);
    float printResult;

    if(planet == 1) {
        printResult = calculateAge(age, mercury);
    } else if(planet == 2) {
        printResult = calculateAge(age, venus);
    } else if(planet == 3) {
        printResult = calculateAge(age, earth);
    } else if(planet == 4) {
        printResult = calculateAge(age, mars);
    } else if(planet == 5) {
        printResult = calculateAge(age, jupiter);
    } else if(planet == 6) {
        printResult = calculateAge(age, saturn);
    } else if(planet == 7) {
        printResult = calculateAge(age, uranus);
    } else if(planet == 8) {
        printResult = calculateAge(age, neptune);
    }
    printf("%.2f\n", printResult);
}

float calculateAge(float a, float p) {
    float result = a / p;
    return result;
}