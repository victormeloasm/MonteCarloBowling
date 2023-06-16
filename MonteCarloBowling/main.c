#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ITERATIONS 1000000
#define BASE 10

double simulate_game() {
    int num_balls = 2;
    int count = 1;
    while (1) {
        if (rand() % (num_balls + 1) == 0) {
            return count;
        } else {
            num_balls++;
            count++;
        }
    }
}

double monte_carlo_simulation(int num_iterations) {
    double total_count = 0;
    srand(time(NULL));
    for (int i = 0; i <= num_iterations; i++) {
        double count = simulate_game();
        total_count += count;
    }
    return total_count / num_iterations;
}

int main() {
    printf("Iterations\tMean\n");
    for (int i = 1; i <= MAX_ITERATIONS; i *= BASE) {
        double mean = monte_carlo_simulation(i);
        printf("%d\t\t%f\n", i, mean);
    }
puts("|_________|");
puts("| o o o o |");
puts("|  o o o  |");
puts("|   o o   |");
puts("|    o    |");
puts("|         |");
puts("|         |");
puts("|         |");
puts("|         |");
puts("|         |");
puts("|    O    |");
    return 0;
}



