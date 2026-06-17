#include <stdio.h>

struct Expense
{
    char ExpenseName[100];
    float amount;
};

int main()
{
    struct Expense expenses[100];
    int count = 0;
    int choice;
    float total = 0;

    printf("\n===========================\n");
    printf("Welcome to Expense Tracker\n");
    printf("===========================\n");

    while (1)
    {
        printf("\n---Expense Tracker---\n");
        printf("1.Add Expense\n");
        printf("2.View Expenses\n");
        printf("3.Total Expense\n");
        printf("4.Exit\n");
        printf("Enter your choice(Eg:1,2,3,4 from above):");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Expense name:");
            scanf("%s", expenses[count].ExpenseName);

            printf("Enter amount:");
            scanf("%f", &expenses[count].amount);

            count++;
            break;

        case 2:
            printf("\nExpenses:\n");
            for (int i = 0; i < count; i++)
            {
                printf("%s- %.2f\n", expenses[i].ExpenseName, expenses[i].amount);
            }
            break;

        case 3:
            total = 0;
            for (int i = 0; i < count; i++)
            {
                total += expenses[i].amount;
            }
            printf("Total Expense: %.2f\n", total);
            break;

        case 4:
            printf("Thankyou for using Expense Tracker\n");
            printf("Have a great day :)\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}