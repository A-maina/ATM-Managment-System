# ATM Management System

This repository contains a C-based implementation of an ATM Management System. The system allows users to perform basic ATM operations like checking balance, depositing money, withdrawing money, and exiting the application.

---

## Features

- **Check Balance:** View the current balance in the account.
- **Deposit Money:** Add money to the account.
- **Withdraw Money:** Withdraw money from the account if the balance permits.
- **Exit:** Exit the ATM system.

---

## How to Fork and Clone the Repository

1. **Fork the Repository:**
   - Navigate to the repository's GitHub page.
   - Click the **Fork** button in the top-right corner to create a personal copy of the repository under your GitHub account.

2. **Clone the Repository:**
   - Open a terminal or command prompt.
   - Run the following command to clone the repository to your local machine:
     ```bash
     git clone https://github.com/A-maina/ATM-Managment-System.git
     ```
   - Replace `<A-maina>` with your GitHub username.

3. **Navigate to the Project Directory:**
   - Move into the project folder:
     ```bash
     cd atm-management-system
     ```

---

## How to Use the ATM System

### Prerequisites

- **GCC Compiler:** Ensure that GCC is installed on your system and added to your PATH.
  - To verify, run:
    ```bash
    gcc --version
    ```
  - If not installed, follow these instructions:
    - For Windows: Install MinGW-w64.
    - For Linux: Use the package manager (e.g., `sudo apt install gcc`).
    - For macOS: Install Xcode Command Line Tools.

### Steps to Compile and Run the System

1. **Compile the Program:**
   - Run the following command to compile the `atm.c` file:
     ```bash
     gcc atm.c -o atm
     ```

2. **Run the Program:**
   - Execute the compiled file:
     ```bash
     ./atm
     ```

3. **Interact with the System:**
   - Follow the on-screen instructions to perform ATM operations.

---

## Contribution

Contributions are welcome! Follow these steps to contribute:

1. Fork the repository.
2. Clone your forked repository.
3. Create a new branch for your feature or fix:
   ```bash
   git checkout -b feature-name
   ```
4. Make your changes and commit them:
   ```bash
   git add .
   git commit -m "Description of changes"
   ```
5. Push your branch to your forked repository:
   ```bash
   git push origin feature-name
   ```
6. Open a Pull Request on the original repository.

---

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.
