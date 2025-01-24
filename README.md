# Capacitance Calculation Program

## Overview

The **Capacitance Calculation Program** is a C++ application designed to calculate the total capacitance of capacitors connected in parallel and series. The program allows users to input capacitance values, perform calculations, and display results through an interactive menu.

## Features

- **Capacitance Input:**
  - Users can enter four capacitance values with validation to ensure positive inputs.
- **Parallel Capacitance Calculation:**
  - Computes the total capacitance for capacitors connected in parallel.
- **Series Capacitance Calculation:**
  - Computes the total capacitance for capacitors connected in series.
- **Results Display:**
  - Displays entered capacitance values and calculated results.
- **Error Handling:**
  - Ensures user inputs valid capacitance values.

## How to Run the Program

1. **Compile the program:**

   ```bash
   g++ Test_3_Capacitance_Program.cpp -o capacitance_calculator
   ```

2. **Run the executable:**

   ```bash
   ./capacitance_calculator
   ```

3. **Follow the on-screen menu options:**

   - Enter capacitance values.
   - Choose to calculate parallel or series capacitance.
   - Display calculated values.

## Menu Options

1. Enter capacitance values.
2. Calculate total parallel capacitance.
3. Calculate total series capacitance.
4. Display calculated values.
5. Exit the program.

## Sample Input/Output

**Example Input:**

```
Enter four capacitance values:
Capacitance value #1: 10
Capacitance value #2: 20
Capacitance value #3: 30
Capacitance value #4: 40
```

**Example Output:**

```
The total parallel capacitance is: 100.00
The total series capacitance is: 5.45
```

## Formulae Used

- **Parallel Capacitance Formula:**
  ```
  C_total_parallel = C1 + C2 + C3 + ... + Cn
  ```
- **Series Capacitance Formula:**
  ```
  C_total_series = 1 / (1/C1 + 1/C2 + 1/C3 + ... + 1/Cn)
  ```

## Technologies Used

- C++
- Standard I/O (`iostream`)
- Mathematical operations (`math.h`)

## Future Improvements

- Add support for more capacitance values.
- Implement file storage to save user inputs and results.
- Introduce a graphical user interface (GUI) for easier interaction.

---

Thank you for using the Capacitance Calculation Program!

