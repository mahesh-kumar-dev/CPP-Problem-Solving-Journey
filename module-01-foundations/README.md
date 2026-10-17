# Module 01 — C++ Foundations and Problem Solving

<p align="center">
  <strong>CPP-Problem-Solving-Journey</strong><br>
  Building programming fundamentals through practical C++ implementations.
</p>



## 📌 About This Module

Module 01 establishes the foundations of C++ programming through small, independently implemented console applications. The exercises focus on transforming mathematical and everyday problems into logical, executable instructions.

Rather than memorizing syntax alone, this module emphasizes understanding how variables store data, how operators transform values, how integer division and remainders work, and how to verify a program's output using examples and boundary cases.

This module is the starting point of my journey toward stronger problem-solving skills, data structures and algorithms, object-oriented programming, and practical software development.

**Repository:** [CPP-Problem-Solving-Journey](https://github.com/mahesh-kumar-dev/CPP-Problem-Solving-Journey)

**Module:** `module-01-foundations/`

## 🎯 Learning Objectives

By completing and reviewing these exercises, I am developing the ability to:

- Write, compile, execute, and debug standalone C++ programs.
- Understand the structure of a C++ source file and the role of `main()`.
- Read user input using `cin` and display results using `cout`.
- Choose suitable numeric types, including `int`, `long long`, and `double`.
- Apply arithmetic, assignment, and comparison operators.
- Understand integer division, modulo, and quotient-remainder decomposition.
- Extract and manipulate individual digits of an integer.
- Convert measurements and represent totals in larger units and remainders.
- Use conditions to classify values and handle special cases.
- Format decimal output using the `<iomanip>` library.
- Recognize input-validation requirements, precision limitations, and integer-overflow risks.
- Test solutions using normal inputs, boundaries, zero values, and invalid inputs.
- Document code and learning progress in a structured GitHub repository.

## 📂 Exercise Overview

The module covers the following 11 problem statements.

| No. | Exercise | Main concepts |
|---:|---|---|
| 01 | Reverse a three-digit integer | Digit extraction, `%`, `/`, range validation |
| 02 | Convert kilometres to metres and centimetres | Unit conversion, `double`, precision, formatted output |
| 03 | Rectangle calculator and square classification | Area, perimeter, comparisons, numeric safety |
| 04 | Swap two values using a temporary variable | Variables, assignment, state changes |
| 05 | Convert total seconds into hours, minutes, and seconds | Integer division, modulo, unit decomposition |
| 06 | Convert days into years, weeks, and remaining days | Quotient-remainder arithmetic |
| 07 | Convert inches into feet and remaining inches | Integer division, modulo, unit conversion |
| 08 | Calculate ATM notes for a monetary amount | Greedy denomination selection, division, remainder |
| 09 | Calculate the sum of a four-digit integer's digits | Digit extraction, arithmetic accumulation |
| 10 | Swap two values without a temporary variable | Arithmetic operations, intermediate values, overflow risks |
| 11 | Convert a 24-hour clock time into 12-hour format | Modulo, clock arithmetic, AM/PM, midnight and noon |

> **Implementation note:** These are separate programming exercises, not one combined application. Each source file that defines its own `main()` should be compiled independently.

## 🧠 Technical Concepts Explained

### 1. Structure of a C++ Program

A C++ program generally contains preprocessor directives, declarations, a `main()` function, executable statements, and a return statement.

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, C++!" << '\n';
    return 0;
}
```

**Key components**

- `#include <iostream>` makes standard input/output stream declarations available.
- `int main()` defines the program's entry point.
- `{ }` enclose a block of statements.
- `std::cout` sends output to the standard output stream.
- `'\n'` inserts a newline.
- `return 0;` conventionally indicates successful termination.
- `;` terminates most individual statements.

**Compilation workflow**

```text
C++ Source File (.cpp)
        |
        v
   Preprocessing
        |
        v
     Compilation
        |
        v
       Linking
        |
        v
  Executable Program
        |
        v
      Execution
```

The exact toolchain may combine or automate some stages, but understanding the workflow helps distinguish compilation errors from errors that occur while a program runs.

### 2. Variables and Data Types

Variables hold values that a program uses during execution. Selecting an appropriate type helps preserve the intended range and precision.

| Type | Typical use | Important consideration |
|---|---|---|
| `int` | Whole numbers and counters | Limited range; arithmetic can overflow |
| `long long` | Larger integer totals | Wider range than `int` on common platforms |
| `double` | Fractional measurements | Approximate floating-point representation |
| `char` | A single character | Character literal uses single quotes |
| `bool` | True/false states | Useful for logical results |
| `std::string` | Text | Requires the `<string>` header |

Example:

```cpp
int quantity = 12;
long long totalSeconds = 90000;
double distanceKm = 1.75;
bool isSquare = true;
```

**Declaration versus initialization**

```cpp
int value;       // Declaration
int count = 10;  // Declaration and initialization
```

Reading an uninitialized local variable can produce undefined behavior. Initialize variables before using their values.

**Important distinction:** Choosing `double` does not make every decimal mathematically exact. Binary floating-point cannot represent every decimal fraction precisely. For financial applications, integer units such as paisa are often preferable to floating-point amounts.

### 3. Standard Input and Output — `<iostream>`

The `<iostream>` header provides standard stream objects used to communicate with a console.

```cpp
#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::cout << "You entered: " << number << '\n';
    return 0;
}
```

| Component | Purpose |
|---|---|
| `std::cin` | Reads formatted input |
| `std::cout` | Displays output |
| `>>` | Extracts input into a variable |
| `<<` | Inserts output into a stream |
| `'\n'` | Starts a new output line |
| `std::endl` | Inserts a newline and flushes the stream |

For ordinary console output, `'\n'` is usually preferable to `std::endl` when an immediate flush is unnecessary.

**Input-validation consideration:** `std::cin >> number` can fail if the supplied input is not a valid integer. A robust program should check the stream state before using the input.

### 4. Formatted Output — `<iomanip>`

The `<iomanip>` header provides stream manipulators that control how output is displayed. It is especially useful when a program prints fractional measurements or wants consistent decimal formatting.

```cpp
#include <iostream>
#include <iomanip>

int main() {
    double measurement = 123.456789;

    std::cout << std::fixed
              << std::setprecision(2)
              << measurement << '\n';

    return 0;
}
```

Output:

```text
123.46
```

#### Important `<iomanip>` components

| Component | Function | Example application |
|---|---|---|
| `std::fixed` | Displays floating-point values in fixed-point notation | Consistent decimal measurements |
| `std::setprecision(n)` | Controls precision; with `fixed`, specifies digits after the decimal point | Displaying two decimal places |
| `std::setw(n)` | Sets a minimum field width for the next formatted field | Aligning tabular output |
| `std::setfill(ch)` | Sets the character used to fill unused field width | Padding a display with zeroes or other characters |
| `std::left` | Left-aligns output within a field | Readable report columns |
| `std::right` | Right-aligns output within a field | Aligning numeric values |

Example using width and fill:

```cpp
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setfill('0')
              << std::setw(4) << 7 << '\n';
    return 0;
}
```

Output:

```text
0007
```

**Precision detail:** `std::setprecision(2)` by itself generally means two significant digits. Combined with `std::fixed`, it means two digits after the decimal point. These manipulators affect display formatting; they do not permanently round or change the value stored in a variable.

`std::setw()` normally applies to the next formatted field, while settings such as `std::fixed` and `std::setfill()` remain in effect until changed.

### 5. Arithmetic Operators

Arithmetic operators perform calculations on numeric values.

| Operator | Meaning | Example |
|---|---|---|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `length * width` |
| `/` | Division | `total / divisor` |
| `%` | Remainder for integer operands | `total % divisor` |

Example:

```cpp
int a = 17;
int b = 5;

int sum = a + b;        // 22
int quotient = a / b;   // 3
int remainder = a % b; // 2
```

#### Integer division

When both operands are integers, division discards the fractional part toward zero.

```cpp
int result = 17 / 5; // 3
```

If a fractional result is required, use floating-point arithmetic:

```cpp
double result = 17.0 / 5; // 3.4
```

Division or remainder with a zero divisor is invalid. Also remember that signed integer overflow is not a safe way to obtain a larger result; check ranges and choose an appropriate type.

### 6. Assignment and Comparison

Assignment stores a value:

```cpp
int score = 90;
score = 95;
```

Comparison evaluates a relationship and produces a Boolean result:

```cpp
bool equal = (5 == 5);       // true
bool different = (5 != 3);  // true
bool larger = (8 > 4);      // true
bool smaller = (2 < 7);     // true
```

The most important distinction is:

- `=` means **assign a value**.
- `==` means **compare two values for equality**.

Comparisons support exercises such as checking whether a rectangle is a square or determining whether a time value lies in a valid range.

### 7. Digit Extraction Using Division and Modulo

For a non-negative integer:

```cpp
int digit = number % 10;
int remaining = number / 10;
```

- `% 10` extracts the last decimal digit.
- `/ 10` removes the last digit through integer division.

For example, starting with `482`:

| Step | Current number | Extracted digit | Remaining number |
|---:|---:|---:|---:|
| 1 | 482 | 2 | 48 |
| 2 | 48 | 8 | 4 |
| 3 | 4 | 4 | 0 |

This pattern supports digit reversal and digit-sum calculations. It also illustrates how a mathematical representation can be translated into simple program instructions.

### 8. Quotient-Remainder Decomposition

Many everyday conversion problems share the same algorithmic pattern: determine how many complete larger units fit into a total, then calculate the remainder.

For a non-negative total measured in seconds:

```cpp
hours = totalSeconds / 3600;
remainingSeconds = totalSeconds % 3600;

minutes = remainingSeconds / 60;
seconds = remainingSeconds % 60;
```

The same idea is used for:

- Converting days into years and weeks.
- Converting inches into feet and remaining inches.
- Calculating how many notes of a denomination can be used.
- Extracting individual decimal digits.

This is one of the central reusable patterns in Module 01.

### 9. Unit Conversion and Numeric Precision

Unit conversions use arithmetic relationships between measurement systems.

Examples:

- \(1\) kilometre \(= 1000\) metres.
- \(1\) kilometre \(= 100000\) centimetres.
- \(1\) foot \(= 12\) inches.

For fractional input, the variable types must preserve the required precision. Storing a fractional result in an integer discards its fractional part.

For example, a distance of `1.75` kilometres corresponds to `1750` metres and `175000` centimetres.

When presenting decimal results, use suitable formatting and ensure the displayed precision matches the problem's requirements.

### 10. Clock Arithmetic and Modulo

A 24-hour clock repeats after 24 hours. Modulo arithmetic can normalize a non-negative hour total into the range from `0` to `23`.

```cpp
int finalHour = (currentHour + extraHours) % 24;
```

For a valid non-negative result:

- `0` represents midnight in 24-hour notation.
- `12` represents noon.
- Hours from `0` through `11` correspond to AM.
- Hours from `12` through `23` correspond to PM.

When converting to a 12-hour display, hour `0` should display as `12 AM`, and hour `12` should display as `12 PM`.

If negative offsets are allowed, ordinary `% 24` may produce a negative remainder. Normalize the result deliberately. Also consider whether adding two large integers could overflow before the modulo operation is applied.

### 11. Greedy Denomination Selection

The ATM exercise explores selecting currency notes from denominations such as `500`, `100`, `50`, `20`, and `10`.

For each denomination:

1. Divide the remaining amount by the denomination to find the number of notes.
2. Calculate the remainder.
3. Continue with the next smaller denomination.

Example for an amount of `1260`:

| Denomination | Notes | Remaining amount |
|---:|---:|---:|
| 500 | 2 | 260 |
| 100 | 2 | 60 |
| 50 | 1 | 10 |
| 20 | 0 | 10 |
| 10 | 1 | 0 |

This exercise demonstrates a greedy strategy. The result depends on the available denominations and the assumption that sufficient notes exist. A program should also validate negative amounts and determine what to do when an amount cannot be represented by the allowed denominations.

### 12. Swapping Values and Intermediate State

Swapping means exchanging the values stored in two variables.

The temporary-variable approach uses a third variable to preserve one value while assignments take place. It is generally clear and safe.

An arithmetic-based approach can explore how intermediate values change without a temporary variable, but addition/subtraction swapping can overflow for large integers. For general C++ code, prefer a temporary variable or `std::swap` when appropriate.

This comparison demonstrates why understanding intermediate state and numeric limits matters more than simply making a shorter program.

## 🗂️ Problem Statements and Practice Checklist

The following list records the complete exercise set discussed for this module. Use it as a progress checklist while verifying the corresponding source files in the repository.

- [ ] **Exercise 01 — Digit Reversal:** Read a three-digit positive integer, extract its digits, and print them in reverse order.
- [ ] **Exercise 02 — Distance Converter:** Convert a distance in kilometres into metres and centimetres while preserving fractional input where required.
- [ ] **Exercise 03 — Rectangle Investigator:** Calculate area and perimeter, and determine whether valid dimensions form a square.
- [ ] **Exercise 04 — Swap with a Temporary Variable:** Exchange the values of two variables using an intermediate variable.
- [ ] **Exercise 05 — Seconds Converter:** Convert total seconds into hours, remaining minutes, and remaining seconds.
- [ ] **Exercise 06 — Days Converter:** Convert a total number of days into 365-day years, weeks, and remaining days.
- [ ] **Exercise 07 — Inches Converter:** Convert total inches into feet and remaining inches.
- [ ] **Exercise 08 — ATM Note Calculator:** Calculate the number of notes of each allowed denomination for a requested amount.
- [ ] **Exercise 09 — Four-Digit Digit Sum:** Extract and add the four digits of a valid four-digit integer.
- [ ] **Exercise 10 — Swap without a Temporary Variable:** Explore arithmetic swapping and evaluate its limitations.
- [ ] **Exercise 11 — 24-Hour to 12-Hour Clock:** Advance a clock by a specified number of hours and display the corresponding 12-hour time with AM/PM.

The checkboxes are a practice tracker, not a claim that each task has been independently tested or completed to production standards.

## 🧪 Testing and Edge Cases

A program should be tested against more than one ordinary input. The following examples are useful starting points.

| Exercise | Suggested test inputs |
|---|---|
| Digit reversal | `123`, `482`, `100`, `99`, `1000` |
| Distance conversion | `1.75`, `1.2345`, `0.005`, `2.0` |
| Rectangle | `5 × 5`, `8 × 3`, `0 × 4`, `-2 × 6` |
| Temporary-variable swap | `3, 9`; equal values; negative values |
| Seconds conversion | `0`, `59`, `60`, `3599`, `3600`, `3601` |
| Days conversion | `0`, `6`, `7`, `364`, `365`, `366`, `730` |
| Inches conversion | `0`, `11`, `12`, `13`, `24` |
| ATM calculator | `0`, `10`, `60`, `500`, `1265`, `-100` |
| Four-digit digit sum | `1000`, `1234`, `9999`, `999`, `10000` |
| Arithmetic swap | Positive, negative, equal, and near-limit integer values |
| Clock conversion | `23 + 1`, `11 + 1`, `12 + 1`, `0 + 0`, `22 + 5` |

### Recommended verification process

1. **Understand the requirement:** Identify valid inputs, expected outputs, and assumptions.
2. **Predict the output:** Calculate the expected result manually before running the program.
3. **Execute the program:** Enter the selected test input and capture the actual output.
4. **Compare results:** Check for arithmetic mistakes, incorrect formatting, and missing cases.
5. **Fix and retest:** Verify that a correction solves the problem without breaking previously passing cases.

Testing should include invalid input where appropriate. For example, a converter that accepts only non-negative measurements should not silently treat negative input as a valid measurement.

## ⚠️ Common Mistakes and Engineering Considerations

- **Integer truncation:** Assigning a fractional calculation to an integer discards its fractional component.
- **Overflow:** A mathematically valid expression can exceed the representable range of its data type.
- **Invalid input:** A failed input operation should be detected before the program uses the resulting variable.
- **Incorrect boundaries:** A program may work for ordinary inputs but fail at zero, midnight, noon, or a maximum accepted value.
- **Missing headers:** Include the appropriate standard header for every library feature used.
- **Misleading output:** Labels and decimal formatting should match the actual values being displayed.
- **Unstated assumptions:** Document rules such as a 365-day year or unlimited ATM note availability.
- **Overgeneralization:** A program designed for positive three-digit integers should not be described as handling every integer unless it actually does.

## 💻 How to Compile and Run

### Option 1 — Dev-C++

1. Open Dev-C++.
2. Open the desired `.cpp` source file.
3. Compile the source file and resolve any reported errors.
4. Run the executable.
5. Enter the test values when prompted.
6. Compare the result against the expected output.

Compile each exercise independently if it contains its own `main()` function.

### Option 2 — GCC or MinGW

Verify that the C++ compiler is installed and available through your terminal:

```bash
g++ --version
```

Navigate to the local module directory and compile one source file:

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic your-file.cpp -o exercise
```

Replace `your-file.cpp` with the actual source filename.

On Windows Command Prompt:

```bat
exercise.exe
```

On Linux or macOS:

```bash
./exercise
```

**Compiler flags explained**

| Flag | Purpose |
|---|---|
| `-std=c++17` | Selects the C++17 language standard |
| `-Wall` | Enables a useful collection of compiler warnings |
| `-Wextra` | Enables additional warnings |
| `-Wpedantic` | Requests diagnostics for certain non-standard language extensions |

Warnings can identify potential mistakes even when a program compiles successfully.

## 🛠️ Tools and Technologies

- **Language:** C++
- **Development environment:** Dev-C++ / GCC-MinGW
- **Core libraries:** `<iostream>`, `<iomanip>`, and `<string>` when required
- **Version control:** Git
- **Code hosting and documentation:** GitHub
- **Programming style:** Small console applications and incremental problem-solving practice

## 📈 Module Scope

### Covered in this module

- Program structure and basic syntax
- Standard console input and output
- Variables and numeric types
- Arithmetic and comparison operators
- Integer division and modulo
- Digit manipulation
- Unit and time conversions
- Basic classification and validation
- Formatted output and decimal precision
- Manual testing and edge-case reasoning

### Planned for future modules

These are future learning areas, not claims of completion in Module 01:

- Conditional logic and Boolean reasoning
- Loops and pattern-based problems
- Functions and problem decomposition
- Arrays, strings, and vectors
- Structures, enumerations, and data modeling
- File handling and error management
- Object-oriented programming
- Searching, sorting, and algorithmic complexity
- Pointers, references, and dynamic memory
- Linked lists, stacks, queues, trees, and graphs
- Independent projects and more systematic testing

## 🚀 What's Next?

The next stage is to move beyond simple sequential calculations and develop stronger control flow, reusable functions, and structured problem-solving techniques.

The longer-term goal is to apply these foundations to independent C++ projects, including **SmartSpend**, a console-based expense tracker that can later grow to support file persistence, summaries, validation, and a graphical interface.

## 👨‍💻 About This Journey

This repository documents my progress in learning C++ through independent implementation, debugging, testing, and continuous improvement.

My focus is to understand not only how to write code, but also why an algorithm works, how data changes during execution, and how to build programs that are correct, readable, and maintainable.

**Learning principle:** Understand the problem, trace the data, design the algorithm, implement the solution, and test it before moving forward.

---

<p align="center">
  <strong>One problem at a time. One concept at a time. Consistent progress.</strong>
</p>
