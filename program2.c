#include <stdio.h>

int main() {
    int quantity;
    float price, total_cost;

    printf("Enter quantity of items: ");
    scanf("%d", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &price);

    total_cost = quantity * price;

    printf("Total cost: %.2f\n", total_cost);

    return 0;
}
