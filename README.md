
# CIS200: Store Management System

## Student Name and Email
Leah Mirch (lmirch@umich.edu)

## Introduction
This project implements a Store Management System in C++. The system handles store inventory management, customer purchases, and returns. It also maintains a history of customer transactions. The application provides a menu-driven interface to perform various store operations.

## Files Overview
- **main.cpp**: Main file to execute the store management system.

## Structs and Their Functionalities

### Item Struct
Represents an item in the store inventory:
- **Attributes**: `name`, `count`, `price`.

### Customer Struct
Represents a customer and their purchases:
- **Attributes**: `name`, `visit_dates`, `items_bought`, `amounts_spent`.

## Functions

### checkoutItem
Checks out an item from the inventory and updates the count:
```cpp
void checkoutItem(string itemName);
```

### returnItem
Accepts a returned item and updates the count:
```cpp
void returnItem(string itemName);
```

### displayInventory
Displays the current inventory:
```cpp
void displayInventory();
```

### itemAvailable
Checks if an item is available in the inventory:
```cpp
bool itemAvailable(string itemName);
```

## Running Instructions
### Prerequisites
- C++ compiler (e.g., g++)

### Compilation and Execution
1. Open a terminal and navigate to the project directory.
2. Compile the project using:
   ```bash
   g++ -o store_system main.cpp
   ```
3. Run the compiled program:
   ```bash
   ./store_system
   ```

## Program Execution
The program provides a menu-driven interface for the following operations:
1. Display inventory.
2. Check item availability.
3. Check out items from inventory.
4. Return items.
5. View customer history.
6. Quit/Leave store.

Customers can interact with the store system to perform various operations, and the system keeps track of their transaction history.

## Additional Information
This project demonstrates basic C++ programming concepts such as structs, vectors, and functions. It provides a practical application of managing store inventory and customer transactions.
