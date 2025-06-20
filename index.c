#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void checkBalance(float balance);
float depositMoney(float balance);
float withdrawMoney(float balance);

int main() {
    int option;
    float balance = 1000.0; // Initial balance
    int continueTransaction = 1;

    printf("\n*** Welcome to ATM Management System ***\n");

    do {
        printf("\nChoose an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = depositMoney(balance);
                break;
            case 3:
                balance = withdrawMoney(balance);
                break;
            case 4:
                printf("\nThank you for using the ATM. Goodbye!\n");
                continueTransaction = 0;
                break;
            default:
                printf("\nInvalid option! Please try again.\n");
        }
    } while (continueTransaction);

    return 0;
}

void checkBalance(float balance) {
    printf("\nYour current balance is: %.2f\n", balance);
}

float depositMoney(float balance) {
    float deposit;
    printf("\nEnter the amount to deposit: ");
    scanf("%f", &deposit);

    if (deposit > 0) {
        balance += deposit;
        printf("\nYou have successfully deposited %.2f.\n", deposit);
        printf("Your new balance is: %.2f\n", balance);
    } else {
        printf("\nInvalid amount. Please enter a positive value.\n");
    }

    return balance;
}

float withdrawMoney(float balance) {
    float withdraw;
    printf("\nEnter the amount to withdraw: ");
    scanf("%f", &withdraw);

    if (withdraw > 0 && withdraw <= balance) {
        balance -= withdraw;
        printf("\nYou have successfully withdrawn %.2f.\n", withdraw);
        printf("Your remaining balance is: %.2f\n", balance);
    } else if (withdraw > balance) {
        printf("\nInsufficient balance. Transaction failed.\n");
    } else {
        printf("\nInvalid amount. Please enter a positive value.\n");
    }

    return balance;
}
