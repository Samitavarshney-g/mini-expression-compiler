# Mini Expression Compiler (C++)

## Overview
This project implements a simple compiler that translates arithmetic expressions into assembly-like instructions.  
The compiler demonstrates key concepts from compiler design such as parsing, optimization, and code generation.

The project is implemented in C++ and focuses on understanding how high-level mathematical expressions can be transformed into lower-level instructions.

---

## Features

- Parsing of basic arithmetic expressions
- Generation of assembly-like instructions
- Constant folding optimization
- Simple instruction generation pipeline
- Demonstrates core compiler design concepts

---

## Compiler Pipeline

The compiler follows a simplified compilation pipeline:

Input Expression  
→ Parsing  
→ Constant Folding Optimization  
→ Instruction Generation  

---

## Example

### Input

2 + 3

### Optimized Result (Constant Folding)

5

### Generated Instructions

LOAD 2  
LOAD 3  
ADD  
STORE RESULT  

---

## Code Structure

main.cpp  
Handles expression input, parsing logic, optimization, and instruction generation.

---

## Optimization Implemented

### Constant Folding

Constant folding is a compiler optimization technique that evaluates constant expressions at compile time.

Example:

3 * 4 → 12

This reduces unnecessary computations during program execution.

---

## Technologies Used

- C++
- Standard Template Library (STL)
- Basic compiler design concepts

---

## How to Run

Compile the program:

g++ main.cpp -o compiler

Run the program:

./compiler

Enter expression:

2 + 3

---

## Learning Outcomes

Through this project I explored:

- How compilers translate expressions into low-level instructions
- Basic compiler optimizations
- Code generation techniques
- Implementation of a simplified compilation pipeline
