#include <stdio.h>

int main() {
    // Declare variables for the marks
    float physics[4], chemistry[4], math[4];
    float physics_avg, chemistry_avg, math_avg;
    float overall_avg;

    // Input marks for Physics
    printf("Enter marks for Physics (Assignment, Coursework, Mid-term, End-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i + 1);
        scanf("%f", &physics[i]);
    }

    // Input marks for Chemistry
    printf("Enter marks for Chemistry (Assignment, Coursework, Mid-term, End-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i + 1);
        scanf("%f", &chemistry[i]);
    }

    // Input marks for Math
    printf("Enter marks for Math (Assignment, Coursework, Mid-term, End-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i + 1);
        scanf("%f", &math[i]);
    }

    // Calculate averages for each subject
    physics_avg = (physics[0] + physics[1] + physics[2] + physics[3]) / 4;
    chemistry_avg = (chemistry[0] + chemistry[1] + chemistry[2] + chemistry[3]) / 4;
    math_avg = (math[0] + math[1] + math[2] + math[3]) / 4;

    // Calculate the overall average
    overall_avg = (physics_avg + chemistry_avg + math_avg) / 3;

    // Print the results
    printf("\nAverage marks for Physics: %.2f\n", physics_avg);
    printf("Average marks for Chemistry: %.2f\n", chemistry_avg);
    printf("Average marks for Math: %.2f\n", math_avg);
    printf("Overall Average: %.2f\n", overall_avg);

    return 0;
}
