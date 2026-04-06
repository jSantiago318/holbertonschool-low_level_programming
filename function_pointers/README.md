# Function Pointers

## Learning Objectives
- Understand what are function pointers and how to use them
- What are the differences between arrays of pointers and pointer to pointers
- How to use pointers to functions to build abstract data types and create function tables

## Scripts

- **0-print_name.c**: Write a function that prints a name.
  - Prototype: `void print_name(char *name, void (*f)(char *))`
  - Function pointer `f` is a function that takes a char pointer and returns void
  - Use the function pointer to print the name

