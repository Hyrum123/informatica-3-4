#include <stdio.h>

float calculateAge(float a, float p);

int main() {
    const float planets[] = {0, 0.24, 0.61, 1, 1.88, 11.86, 29.44, 84.01, 164.79};
    const char* planetNames[] = {"0 Ain't no choice", "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int age, planetChoice;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Select a planet to see your age on that planet\n1. Mercury\n2. Venus\n3. Earth\n4. Mars\n5. Jupiter\n6. Saturn\n7. Uranus\n8. Neptune\nEnter an option: ");
    scanf("%d", &planetChoice);
    float printResult = calculateAge(age, planets[planetChoice]);
    printf("Your age if you lived on planet %s would be %.2f\n", planetNames[planetChoice], printResult);
}

float calculateAge(float a, float p) {
    float result = a / p;
    return result;
}