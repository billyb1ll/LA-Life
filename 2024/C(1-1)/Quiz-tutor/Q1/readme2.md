# C Program: Electricity Bill Calculator

## Task Overview
This C program calculates electricity bills using progressive rates. The user inputs the number of electricity units consumed, and the program calculates the total cost in Baht based on the following tiered pricing structure:

- **Tier 1:** The first 50 units are charged at 2.5 Baht per unit.
- **Tier 2:** Units 51 to 100 are charged at 3 Baht per unit.
- **Tier 3:** Units 101 and above are charged at 3.5 Baht per unit.

## Input
- The input should be an integer representing the number of electricity units consumed.

## Output
- The program outputs the total electricity cost in Baht. The result is printed on a separate line without any additional text.

## Example Calculations

1. **Input:** `60`  
   **Output:** `155`
   - **Explanation:** The first 50 units are charged at 2.5 Baht each (50 × 2.5 = 125). The remaining 10 units are charged at 3 Baht each (10 × 3 = 30). Total cost = 125 + 30 = 155 Baht.

2. **Input:** `120`  
   **Output:** `345`
   - **Explanation:** The first 50 units are charged at 2.5 Baht each (50 × 2.5 = 125). The next 50 units are charged at 3 Baht each (50 × 3 = 150). The remaining 20 units are charged at 3.5 Baht each (20 × 3.5 = 70). Total cost = 125 + 150 + 70 = 345 Baht.

## Important Notes
- The program will be checked automatically by software. Ensure the output is exactly as specified.
- Input must be an integer.
- Only print the answer on a separate line, without any additional text.
