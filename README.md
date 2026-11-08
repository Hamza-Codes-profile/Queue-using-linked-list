# Queue Using Singly Linked List (C++)

A simple implementation of the **Queue data structure using a Singly Linked List** in C++.

## Overview

This program implements a queue following the FIFO (First In, First Out) principle.

Elements are inserted at the rear and removed from the front using dynamically allocated linked-list nodes.

## Operations Implemented

| Function | Description |
|---|---|
| `enqueue()` | Inserts an element at the rear of the queue. |
| `dequeue()` | Removes and returns the front element. |
| `isEmpty()` | Checks whether the queue is empty. |
| `length()` | Returns the number of elements. |
| `display()` | Displays all elements in the queue. |
| `~queue()` | Releases dynamically allocated memory. |

## Example

**Operations:**
```text
Enqueue: 10
Enqueue: 20
Enqueue: 30
Dequeue
Enqueue: 40
Dequeue
Dequeue
Dequeue
```

**Queue progression:**
```text
10
10  20
10  20  30
20  30
20  30  40
30  40
40
Empty Queue
```

## Concepts Practiced

- FIFO (First In, First Out).
- Singly Linked Lists.
- Dynamic memory allocation (`new` and `delete`).
- Pointer manipulation.
- Queue traversal.
- Constructors and destructors.

## Technologies

- Language: C++
- Data Structure: Queue
- Implementation: Singly Linked List

## Learning Outcome

Built as part of my Data Structures learning journey to understand how queues can be implemented using linked lists and how front and rear pointers manage insertion and deletion efficiently.
