# 0-positive_or_negative.c

This program assigns a random integer to the variable `n` each time it is executed and prints whether the number is positive, negative, or zero.

## 🧠 Description

The program uses the `rand()` function to generate a pseudo-random number. Based on the value of `n`, it prints:

- "`n` is positive" if the number is greater than 0
- "`n` is zero" if the number equals 0
- "`n` is negative" if the number is less than 0

The logic is implemented using `if`, `else if`, and `else` statements.

> ⚠️ You are not required to understand `srand`, `time`, or `RAND_MAX`.

---

## 🧾 File Structure

- **File**: `0-positive_or_negative.c`
- **Directory**: `variables_if_else_while`
- **Repo**: `holbertonschool-low_level_programming`

---

## 🛠️ Compilation

Use the following command to compile:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
