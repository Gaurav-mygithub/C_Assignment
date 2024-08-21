#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100
#define NAME_LENGTH 100
#define DATE_LENGTH 11  // Format: YYYY-MM-DD

// Define the structure for inventory item
typedef struct {
    char name[NAME_LENGTH];
    float price;
    int quantity;
    char manufacturing_date[DATE_LENGTH];
} Item;

// Function prototypes
void inputItems(Item items[], int *n);
void displayItems(const Item items[], int n);

int main() {
    Item inventory[MAX_ITEMS];
    int numItems;

    // Input item details
    printf("Enter the number of items: ");
    scanf("%d", &numItems);
    getchar(); // Consume newline left by scanf

    if (numItems > MAX_ITEMS) {
        printf("Number exceeds the maximum limit of %d items.\n", MAX_ITEMS);
        return 1;
    }

    inputItems(inventory, &numItems);

    // Display all items
    printf("\nInventory Details:\n");
    displayItems(inventory, numItems);

    return 0;
}

// Function to input item details
void inputItems(Item items[], int *n) {
    for (int i = 0; i < *n; i++) {
        printf("\nEnter details for item %d:\n", i + 1);
        
        printf("Name: ");
        fgets(items[i].name, NAME_LENGTH, stdin);
        items[i].name[strcspn(items[i].name, "\n")] = '\0'; // Remove newline character

        printf("Price: ");
        scanf("%f", &items[i].price);
        getchar(); // Consume newline character left by scanf

        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        getchar(); // Consume newline character left by scanf

        printf("Manufacturing Date (YYYY-MM-DD): ");
        fgets(items[i].manufacturing_date, DATE_LENGTH, stdin);
        items[i].manufacturing_date[strcspn(items[i].manufacturing_date, "\n")] = '\0'; // Remove newline character
    }
}

// Function to display item details
void displayItems(const Item items[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nItem %d:\n", i + 1);
        printf("Name: %s\n", items[i].name);
        printf("Price: %.2f\n", items[i].price);
        printf("Quantity: %d\n", items[i].quantity);
        printf("Manufacturing Date: %s\n", items[i].manufacturing_date);
        printf("-------------------------\n");
    }
}
