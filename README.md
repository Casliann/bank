# Bank System

A banking application built with **CMake** to manage accounts and perform basic operations like deposits, withdrawals, and reporting.

## Version 1.0

### Features
- **Account Management**: Create, delete, and update accounts.
- **Account Types**: 
  - Standard Account
  - Account with Initial Balance
  - Account with Overdraft Limit
- **Transactions**: 
  - Deposit money
  - Withdraw money
- **Reporting**: View the number of total amounts in the system.

### User Interface
At runtime, the application shows the following interactive menu:

*** WELCOME TO THE BANK *** 
Select an option: 
    1. Create an account
    2. Delete account
    3. Deposit money
    4. Withdraw money
    5. Report
    6. Exit

### Future Version (1.1)
- **Transactions Between Users**: Ability to transfer money between accounts.

## Build & Run

### Requirements
- **CMake**
- A C compiler (e.g., GCC)

### Steps
1. Clone the repository.
2. Create a build directory and run:
   ```bash
   cmake ..
   make 
   ./bank

