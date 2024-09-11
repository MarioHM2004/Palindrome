# Palindrome Finder

This tool finds iterated reversal palindromes and determines the smallest number of iterations needed to achieve a palindromic number, given specific constraints.

## Usage

```bash
./palindrome -h
```

## Options

- `-n number`
  - **Description**: Integer to be transformed (must be >=0).
  - **Usage**: Finds how many iterations are needed to turn this number into a palindrome.
  
- `-p palindrome`
  - **Description**: Target palindromic number to achieve (must be >=0).
  - **Usage**: Finds all integers `n` that will turn into this palindrome within the given constraints.
  - **Note**: This option is incompatible with the `-n` option.

- `-b base`
  - **Description**: Base in which the procedure will be executed (1 < base <= 10).
  - **Default**: Base 10.
  
- `-imin i`
  - **Description**: Minimum number of iterations, inclusive (must be >=0).
  - **Default**: 0.

- `-imax i`
  - **Description**: Maximum number of iterations, inclusive (must be >=0).
  - **Default**: No upper limit.

## Examples

1. **Find iterations for a number to become a palindrome**:
   ```bash
   ./palindrome -n 123

2. **Find numbers that become a specific palindrome**:
   ```bash
   ./palindrome -p 121
   ```

3. **Execute in a different base and set iteration constraints**:
   ```bash
   ./palindrome -n 123 -b 2 -imin 1 -imax 10
   ```

## Help

For a list of all commands and usage instructions, run:

```bash
./palindrome -h
```

Happy palindrome finding! 🚀
