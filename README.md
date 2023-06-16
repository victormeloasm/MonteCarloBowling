
# Bowling Game Simulation

This repository contains a Monte Carlo simulation of a bowling game. The objective is to estimate the expected number of rolls required to knock down all the pins and complete a game of bowling.

## Problem Description

In the game of bowling, players take turns rolling a ball to knock down pins. Each frame consists of two rolls, except for the tenth frame, which can have up to three rolls. The player's score is determined by the number of pins knocked down and any additional bonuses earned (e.g., for a spare or a strike).

The goal of this simulation is to calculate the average number of rolls required to complete a game of bowling. The simulation considers the random nature of knocking down pins and accounts for the rules of the game.

## Monte Carlo Simulation

A Monte Carlo simulation is used to estimate the expected number of rolls. The simulation randomly generates bowling games and counts the number of rolls required to complete each game. By running the simulation multiple times and averaging the results, we can obtain an estimate of the mean number of rolls.

The simulation starts with an empty frame and progresses through each frame, simulating rolls based on the rules of the game. The process continues until all frames are completed and the game is finished.

## Technical Details

The simulation is implemented in C programming language. The code consists of the following components:

- `simulate_game()`: Simulates a single game of bowling by randomly generating rolls and keeping track of the number of rolls required to complete the game.

- `monte_carlo_simulation()`: Performs the Monte Carlo simulation by calling `simulate_game()` multiple times and calculating the average number of rolls.

- `main()`: Entry point of the program. Configures the number of simulations to run and prints the estimated mean number of rolls.

To improve performance, the simulation utilizes the `rand()` function from the C standard library to generate random numbers. Additionally, OpenMP is used to parallelize the simulations and speed up the computation.

## Usage

To run the simulation, ensure that you have a C compiler installed. Simply compile the `bowling.c` file and execute the resulting binary.

```bash
gcc -fopenmp -o bowling bowling.c
./bowling
```

Adjust the number of simulations in the `num_simulations` variable within the `main()` function to control the accuracy of the estimate.

## Results

The simulation provides an estimate of the mean number of rolls required to complete a game of bowling based on the rules and random nature of the game. The more simulations performed, the more accurate the estimate becomes.

## License

This project is licensed under the [MIT License](LICENSE).


