# Week 0 – C Foundations (Pointers & Memory)

## Why I’m doing this
I’m learning C to build a **deep understanding of how code works at the memory level**.  
As a data scientist, I felt my understanding of programming was too abstract, so this week is focused on **removing the black box** — pointers, memory, and execution flow.

This is not about speed or interviews.  
This is about **mental models**.

---

## Goals for Week 0
- Understand how memory works in C
- Get comfortable with pointers and double pointers
- Clearly visualize stack vs heap
- Write safe dynamic memory code
- Build a solid base before starting DSA in C

---

## Day 1 – C Basics & Setup
- Refreshed C syntax
- Environment setup (compile & run using `gcc`)
- Wrote basic programs and functions
- Split code across files (`.c` / `.h`) like real projects
- Implemented math programs (nCr, nPr, Pascal’s triangle)
- Intro to pointers (address and dereference)

---

## Day 2 – Pointers & Double Pointers
- Single pointers (`int*`)
- Dereferencing and pointer traversal
- Passing pointers to functions
- Modifying values via pointers (pass-by-reference)
- Double pointers (`int**`)
- Pointer lifetime and common mistakes

---

## Day 3 – Stack vs Heap (Memory Model)
- Stack memory vs heap memory
- Function call stack frames
- Local, global, and static variables
- What happens in memory during function calls
- Why returning addresses of local variables is unsafe

---

## Day 4 – Arrays vs Pointers
- Array memory layout
- Pointer arithmetic
- `arr[i]` vs `*(arr + i)`
- Array decay to pointers in function calls
- `sizeof(array)` vs `sizeof(pointer)`
- Passing arrays to functions

---

## Day 5 – Dynamic Memory Allocation
- `malloc`, `calloc`, `realloc`
- `free` and memory ownership
- Memory leaks and dangling pointers
- Allocating memory inside functions
- Proper cleanup patterns

---

## Day 6 – Recursion (Stack in Action)
- Recursion fundamentals
- Base case vs recursive case
- Visualizing recursion using the call stack
- Recursive vs iterative solutions
- Common recursion pitfalls

---

## Day 7 – Linked List Basics
- `struct` in C
- Self-referential structures
- Creating and managing linked list nodes
- Insertion and traversal
- Freeing linked lists
- How pointers enable data structures

---

## Outcome
By the end of Week 0, I should be able to:
- Reason about memory confidently
- Use pointers without guesswork
- Debug pointer-related bugs logically
- Understand how data structures work internally
- Move into **DSA in C** with clarity

---

> **Next step:** Start a dedicated **DSA in C** course once these fundamentals feel solid.
