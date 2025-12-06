#include <stdio.h>
#include <stdlib.h>

int login();
void showMenu();
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);


int main()
{
    float balance = 1000.00; 
    int choice;

    if (!login())
    { 
        printf("Access denied. Exiting...\n");
        return 0;
    }

    while (1)
    {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            balance = deposit(balance);
            break;

        case 3:
            balance = withdraw(balance);
            break;

        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            return 0;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

int login()
{
    int storedPIN = 1234;
    int enteredPIN;
    int attempts = 3;

    while (attempts > 0)
    {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == storedPIN)
        {
            printf("Login successful!\n\n");
            return 1;
        }
        else
        {
            attempts--;
            printf("Incorrect PIN. Attempts remaining: %d\n", attempts);
        }
    }

    return 0; 
}


void showMenu()
{
    printf("\n===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("====================\n");
}


void checkBalance(float balance)
{
    printf("Your current balance is: Ksh %.2f\n", balance);
}


float deposit(float balance)
{
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount. Deposit must be positive.\n");
        return balance;
    }

    balance += amount;
    printf("Deposit successful! New balance: Ksh %.2f\n", balance);
    return balance;
}


float withdraw(float balance)
{
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount. Withdrawal must be positive.\n");
        return balance;
    }

    if (amount > balance)
    {
        printf("Insufficient balance! Transaction cancelled.\n");
        return balance;
    }

    balance -= amount;
    printf("Withdrawal successful! New balance: Ksh %.2f\n", balance);
    return balance;
}