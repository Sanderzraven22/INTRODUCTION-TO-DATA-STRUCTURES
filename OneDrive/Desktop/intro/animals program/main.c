#include <stdio.h>

int main() {
    int N, X;

    // Input the number of domestic and wild animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    printf("Enter the number of wild animals: ");
    scanf("%d", &X);

    // Declare arrays to store the names of animals
    char domestic_animals[N][50], wild_animals[X][50];

    // Input names of domestic animals
    printf("\nEnter names of %d domestic animals:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Domestic Animal %d: ", i + 1);
        scanf("%s", domestic_animals[i]);
    }

    // Input names of wild animals
    printf("\nEnter names of %d wild animals:\n", X);
    for (int i = 0; i < X; i++) {
        printf("Wild Animal %d: ", i + 1);
        scanf("%s", wild_animals[i]);
    }

    // Print all animals
    printf("\nAll animals entered:\n");

    printf("\nDomestic Animals:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", domestic_animals[i]);
    }

    printf("\nWild Animals:\n");
    for (int i = 0; i < X; i++) {
        printf("%s\n", wild_animals[i]);
    }

    return 0;
}
