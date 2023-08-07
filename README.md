# push_swap
Push Swap is a C project designed to sort a list of integers in stack "a" using a set of operations. The program finds the shortest sequence of operations to sort the stack in ascending order, with the smallest number on top of the stack.

## Requirements
To compile the project, make sure you have a C compiler installed on your system. A Makefile is provided to facilitate the compilation process.

## Usage

```bash
# Clone this project
git clone https://github.com/laugarci/push_swap

# Access
cd push_swap

# To run the simulation, compile the philo program using the provided Makefile:
make

# To run (example)
./push_swap num1 num2 num2 num4 [...]

# To remove objects
make clean

# To remove objects and executable
make fclean

```

## Available Operations
The project allows the use of the following operations to manipulate stacks "a" and "b":
```bash
- sa: swap a - swap the first two elements on stack a. It does nothing if there is one or fewer elements.

- sb: swap b - swap the first two elements on stack b. It does nothing if there is one or fewer elements.

- ss: swap a and swap b simultaneously.

- pa: push a - take the first element from stack b and push it to the top of stack a. It does nothing if stack b is empty.

- pb: push b - take the first element from stack a and push it to the top of stack b. It does nothing if stack a is empty.

- ra: rotate a - shift all elements on stack a up by one position, so the first element becomes the last.

- rb: rotate b - shift all elements on stack b up by one position, so the first element becomes the last.

- rr: rotate a and rotate b simultaneously - shift all elements on stack a and stack b up by one position, so the first element becomes the last.

- rra: reverse rotate a - shift all elements on stack a down by one position, so the last element becomes the first.

- rrb: reverse rotate b - shift all elements on stack b down by one position, so the last element becomes the first.

- rrr: reverse rotate a and reverse rotate b simultaneously - shift all elements on stack a and stack b down by one position, so the last element becomes the first.
```
