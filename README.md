# C++ Programming & Data Structures

A curated academic collection of C++ programming work developed as part of coursework in the **Faculty of Artificial Intelligence**.

This repository combines:
- C++ programming fundamentals
- Small console applications
- Data structures implementations
- Searching and sorting algorithms
- Selected project presentations and supporting documentation

The collection was cleaned before publication: duplicated implementations and Visual Studio generated/build files were removed, while the strongest available version of repeated mini-applications was retained.

## Repository Structure

```text
.
├── fundamentals/
│   ├── arrays
│   ├── strings
│   ├── structs
│   ├── pointers
│   ├── dynamic memory
│   ├── matrices
│   ├── recursion
│   └── input validation
│
├── mini-applications/
│   ├── cashier-system.cpp
│   ├── gpa-calculator.cpp
│   ├── bank-atm-system.cpp
│   ├── calories-calculator.cpp
│   └── number-guessing-game.cpp
│
├── data-structures/
│   ├── linked lists
│   ├── stacks
│   ├── queues
│   ├── trees
│   ├── graphs
│   └── hashing
│
├── algorithms/
│   ├── searching
│   └── sorting
│
└── docs/
    ├── academic-context.md
    ├── mini-applications.md
    └── presentations/
```

## Featured Mini Applications

### Cashier System
A console-based cashier application demonstrating arrays, menu-driven interaction, product storage, total calculation, payment processing, and change calculation.

### GPA Calculator
A console application for calculating GPA from course grades and credit hours, with input validation for grades and credit-hour values.

### Bank / ATM System
A simple ATM simulation demonstrating functions, pointers, loops, menu interaction, balance display, and withdrawal validation.

### Calories Calculator
A food-calorie lookup and calculation application using the C++ `map` container and quantity-based calorie calculation.

### Number Guessing Game
A simple random-number guessing game demonstrating modern random number generation, input validation, loops, and conditional feedback based on the distance from the target.

More context is available in [`docs/mini-applications.md`](docs/mini-applications.md).

## Data Structures

The repository includes standalone implementations/examples for:

- Singly Linked List
- Doubly Linked List
- Circular Linked List
- Stack
- Queue
- Circular Queue
- Deque
- Priority Queue
- Binary Tree Traversal
- Binary Search Tree
- Graph using an Adjacency List
- Hash Table

## Algorithms

### Searching
- Linear Search
- Binary Search

### Sorting
- Bubble Sort
- Selection Sort
- Insertion Sort
- Heap Sort

## Fundamentals

Examples cover:
- Arrays
- Matrices
- Strings
- Structures
- Pointers
- Dynamic Memory
- Recursion
- Input Validation
- Basic console programs

## Presentations & Documentation

The [`docs/presentations/`](docs/presentations/) directory contains the available original project presentations, including Cashier System, ATM Machine Simulation, Number Guessing Game, and Calories Calculator. These materials are kept as project evidence and may contain the original team/member information from the academic submissions.

Additional summaries and academic context are available in:
- [`docs/mini-applications.md`](docs/mini-applications.md)
- [`docs/academic-context.md`](docs/academic-context.md)
- [`SOURCE-NOTES.md`](SOURCE-NOTES.md)

## Academic Context

The projects in this repository represent coursework and programming practice completed during study in the **Faculty of Artificial Intelligence**.

The source-code organization focuses on the technical work, while the original presentation files are preserved separately as supporting project documentation.

## How to Run

Each `.cpp` file is designed as an independent console program.

Using g++:

```bash
g++ -std=c++17 path/to/file.cpp -o app
./app
```

On Windows with MinGW:

```bash
g++ -std=c++17 path/to/file.cpp -o app.exe
app.exe
```

Visual Studio can also be used by creating/opening a C++ Console project and adding the desired source file.

## Notes

- This is an academic/learning collection rather than a production software package.
- The original learning scope and standalone nature of the exercises have been preserved.
- Generated IDE/build artifacts such as `.vs`, `Debug`, `Release`, `.obj`, `.pdb`, `.ilk`, and similar files were intentionally excluded.
