# CPP Module 01

**A deep dive into memory allocation, references, pointers and switch case statement in C++.**

This project explores fundamental C++ concepts related to memory management and program flow control. It demonstrates the proper usage of new/delete operators, references vs pointers, and file handling in C++.

## Structure

### ex00/
The `ex00` directory focuses on class instantiation and member functions:
- **Zombie.cpp**: Implementation of the Zombie class.
- **Zombie.hpp**: Header file for the Zombie class.
- **newZombie.cpp**: Creates a zombie on the heap.
- **randomChump.cpp**: Creates a zombie on the stack.
- **main.cpp**: Demonstrates different zombie creation methods.

### ex01/
The `ex01` directory explores array allocation:
- **Zombie.cpp**: Extended Zombie class implementation.
- **Zombie.hpp**: Header file with class declaration.
- **zombieHorde.cpp**: Creates multiple zombies in an array.
- **main.cpp**: Tests the zombie horde creation.

### ex02/
The `ex02` directory demonstrates references vs pointers:
- **main.cpp**: Illustrates differences between references and pointers using a simple string example.

### ex03/
The `ex03` directory implements a weapon system:
- **Weapon.cpp/hpp**: Defines a weapon class.
- **HumanA.cpp/hpp**: Implements HumanA class that's always armed.
- **HumanB.cpp/hpp**: Implements HumanB class that may not always have a weapon.
- **main.cpp**: Tests the weapon system.

### ex04/
The `ex04` directory focuses on file handling:
- **main.cpp**: Implements a simple string replacement program working with files.

### ex05/
The `ex05` directory demonstrates the use of pointers to member functions:
- **Harl.cpp/hpp**: Implements a logger class using pointers to member functions.
- **main.cpp**: Tests the Harl logger.

### ex06/
The `ex06` directory extends the previous exercise:
- **Harl.cpp/hpp**: Enhanced Harl class with filter functionality.
- **main.cpp**: Implements harlFilter.

## Features

- **Memory Management**: Proper use of new and delete operators
- **Reference Handling**: Understanding references vs pointers
- **File Operations**: Basic file input/output operations
- **Class Design**: Implementation of multiple interacting classes
- **Pointer to Member Functions**: Advanced function pointer usage

## Usage

To compile each exercise, navigate to its directory and run:
```bash
make
```

### Running the Programs

Examples for each exercise:

ex00 (Zombie Creation):
```bash
./zombie
```

ex01 (Zombie Horde):
```bash
./zombieHorde
```

ex04 (File Replace):
```bash
./replace filename s1 s2
```

ex05 (Harl):
```bash
./harl
```

ex06 (HarlFilter):
```bash
./harlFilter "DEBUG"
./harlFilter "INFO"
./harlFilter "WARNING"
./harlFilter "ERROR"
```

## Compilation

All exercises are compiled with:
```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp
```

## Learning Objectives

- Understanding memory allocation in C++
- Mastering pointers and references
- Working with file streams
- Implementing switch statements
- Using pointers to member functions
- Proper class design and implementation
