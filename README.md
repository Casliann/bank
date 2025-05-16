# Bank System

A banking application built with **CMake** to manage accounts and perform basic operations like deposits, withdrawals, and reporting.

## Version 1.1

### Features
- **Account Management**: Create and delete accounts.
- **Account Types**: 
  - Standard Account
  - Account with Initial Balance
  - Account with Overdraft Limit
- **Transactions**: 
  - Deposit money
  - Withdraw money
  - Transfer money
- **Reporting**
  - View the number of total accounts in the system.
  - View last 10 transactions.
  - Total amount of money in all accounts.

### User Interface
At runtime, the application shows the following interactive menu:

  WELCOME TO THE BANK, Select an option:
    
  1.   Create an account
  2.   Delete account
  3.   Deposit money
  4.   Withdraw money
  5.   Transfer money
  6.   Report
  7.   Exit

## Build & Run

Make sure that `cmake` and `make` are installed on your system.

1. **Clone the project**:
   Clone the repository to your local machine:

   ```bash
   git clone git@github.com:FHTW-HWSE2/bank-dimchov_b.git
   cd bank-dimchov_b
   ```

2. **Make the build script executable**:
   Make the `build.sh` script executable:

   ```bash
   chmod +x build.sh
   ```

3. **Run the build script**:
   Now, you can run the script to build the project and execute tests:

   ```bash
   ./build.sh
   ```
