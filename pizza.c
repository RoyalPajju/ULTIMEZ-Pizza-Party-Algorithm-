#include <stdio.h>

void calculatePizzaSlices(int num_people, int *large, int *medium, int *regular, int *small) {
    int large_slices = 8;
    int medium_slices = 6;
    int regular_slices = 4;
    int small_slices = 1;

    *large = num_people / large_slices;
    num_people %= large_slices;

    *medium = num_people / medium_slices;
    num_people %= medium_slices;

    *regular = num_people / regular_slices;
    num_people %= regular_slices;

    *small = num_people; // Assign the remaining people to small slices
}

int main() {
    int num_people;
    int large_pizzas, medium_pizzas, regular_pizzas, small_pizzas;

    printf("Enter the number of individuals: ");
    scanf("%d", &num_people);

    calculatePizzaSlices(num_people, &large_pizzas, &medium_pizzas, &regular_pizzas, &small_pizzas);

    printf("Number of each type of pizza:\n");
    printf("Large pizza slices: %d\n", large_pizzas);
    printf("Medium pizza slices: %d\n", medium_pizzas);
    printf("Regular pizza slices: %d\n", regular_pizzas);
    printf("Small pizza slices: %d\n", small_pizzas);

    return 0;
}
