# Random Walk Letters in C

A simple C program that creates a random path of letters A to Z through a grid. Built as part of a personal learning exercise to practice arrays, loops, and randomness in C.

## Description
The program starts at the top-left corner and places each new letter in a randomly chosen empty neighboring cell. It stops when all letters are placed or no more moves are possible.

## Learning Purpose
Created to practice C programming and build logic using arrays and random paths.

## How It Works
- Initializes a grid with `.` characters
- Fills the grid by moving randomly in one of four directions
- Stops if blocked or after placing 'Z'

## Sample Outputs
Each run gives different results. Here are two examples:

### Example 1
![Random Walk Output 1](attachment:file-PS1w34UoMXNJv92Y99U8ph)

### Example 2
![Random Walk Output 2](attachment:file-Wp5B3VtccWwq25qaMK5R62)

## Run It
```bash
gcc random_walk_letters.c -o random_walk_letters
./random_walk_letters
```

---
Feel free to explore, use, or modify this for your own C learning journey!

