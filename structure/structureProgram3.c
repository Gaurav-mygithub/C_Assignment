#include <stdio.h>
#include <string.h>

// Define the structure for library book
typedef struct {
    int id;
    char title[80];
    char publisher[20];
    int code;  // 1 - Textbook, 2 - Magazine, 3 - Reference book
    union {
        int no_of_copies;    // For textbooks
        char month[10];      // For magazines
        int edition;         // For reference books
    } info;
    int cost;
} library_book;

// Function prototypes
void inputBookDetails(library_book *book);
void displayBookDetails(const library_book *book);

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar(); // Consume newline left by scanf

    library_book books[n]; // Array to store book details

    // Input details for each book
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        inputBookDetails(&books[i]);
    }

    // Display details of each book
    printf("\nLibrary Book Details:\n");
    for (int i = 0; i < n; i++) {
        displayBookDetails(&books[i]);
    }

    return 0;
}

// Function to input book details
void inputBookDetails(library_book *book) {
    printf("ID: ");
    scanf("%d", &book->id);
    getchar(); // Consume newline character left by scanf

    printf("Title: ");
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strcspn(book->title, "\n")] = '\0'; // Remove newline character

    printf("Publisher: ");
    fgets(book->publisher, sizeof(book->publisher), stdin);
    book->publisher[strcspn(book->publisher, "\n")] = '\0'; // Remove newline character

    printf("Code (1 - Textbook, 2 - Magazine, 3 - Reference book): ");
    scanf("%d", &book->code);
    getchar(); // Consume newline character left by scanf

    switch (book->code) {
        case 1: // Textbook
            printf("Number of copies: ");
            scanf("%d", &book->info.no_of_copies);
            break;
        case 2: // Magazine
            printf("Issue month: ");
            fgets(book->info.month, sizeof(book->info.month), stdin);
            book->info.month[strcspn(book->info.month, "\n")] = '\0'; // Remove newline character
            break;
        case 3: // Reference book
            printf("Edition number: ");
            scanf("%d", &book->info.edition);
            break;
        default:
            printf("Invalid code. Setting details to default values.\n");
            book->info.no_of_copies = 0;
            strcpy(book->info.month, "N/A");
            book->info.edition = 0;
            break;
    }

    printf("Cost: ");
    scanf("%d", &book->cost);
    getchar(); // Consume newline character left by scanf
}

// Function to display book details
void displayBookDetails(const library_book *book) {
    printf("\nID: %d\n", book->id);
    printf("Title: %s\n", book->title);
    printf("Publisher: %s\n", book->publisher);
    printf("Code: %d\n", book->code);

    switch (book->code) {
        case 1: // Textbook
            printf("Number of copies: %d\n", book->info.no_of_copies);
            break;
        case 2: // Magazine
            printf("Issue month: %s\n", book->info.month);
            break;
        case 3: // Reference book
            printf("Edition number: %d\n", book->info.edition);
            break;
    }

    printf("Cost: %d\n", book->cost);
}
