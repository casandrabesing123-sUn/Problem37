#include <stdio.h>

int main() {
    int plan, months;
    float monthlyRate, subtotal, discount, totalBill;

    printf("INTERNET SUBSCRIPTION BILLING\n");
    printf("1. Basic   - P999/month\n");
    printf("2. Standard - P1,499/month\n");
    printf("3. Premium - P1,999/month\n");

    printf("Select your plan (1-3): ");
    scanf("%d", &plan);

    printf("Enter number of months: ");
    scanf("%d", &months);

    switch (plan) {
    case 1:
        monthlyRate = 999;
        break;
    case 2:
        monthlyRate = 1,499;
        break;
    case 3:
        monthlyRate = 1,999;
        break;
    default:
        printf("Invalid plan selected.\n");

    }

    if (months <= 0) {
       printf("Invalid number of months.\n");
    }

    subtotal = monthlyRate * months;

    if (months >= 6) {
        discount = subtotal * 0.10;
    } else {
        discount = 0;
    }

    totalBill = subtotal - discount;

    printf("\n------ BILL SUMMARY ------\n");
    printf("Monthly Rate: %.2f\n", monthlyRate);
    printf("Months: %d\n", months);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Discount: %.2f\n", discount);
    printf("Total Bill: %.2f\n", totalBill);

    return 0;
}
