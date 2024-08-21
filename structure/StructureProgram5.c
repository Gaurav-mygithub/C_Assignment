#include <stdio.h>

#define MAX_CRICKETERS 5
#define NAME_LENGTH 100
#define TEAM_LENGTH 50

// Define the structure for cricket
typedef struct {
    char cricketer_name[NAME_LENGTH];
    char team_name[TEAM_LENGTH];
    float average;
    int highest_score;
} cricket;

// Function prototypes
void inputCricketerDetails(cricket cricketers[], int n);
void displayCricketerDetails(const cricket cricketers[], int n);

int main() {
    cricket cricketers[MAX_CRICKETERS];

    // Input details for cricketers
    printf("Enter details for %d cricketers:\n", MAX_CRICKETERS);
    inputCricketerDetails(cricketers, MAX_CRICKETERS);

    // Display details of cricketers
    printf("\nCricketer Details:\n");
    displayCricketerDetails(cricketers, MAX_CRICKETERS);

    return 0;
}

// Function to input cricketer details
void inputCricketerDetails(cricket cricketers[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for cricketer %d:\n", i + 1);

        printf("Cricketer Name: ");
        fgets(cricketers[i].cricketer_name, NAME_LENGTH, stdin);
        cricketers[i].cricketer_name[strcspn(cricketers[i].cricketer_name, "\n")] = '\0'; // Remove newline character

        printf("Team Name: ");
        fgets(cricketers[i].team_name, TEAM_LENGTH, stdin);
        cricketers[i].team_name[strcspn(cricketers[i].team_name, "\n")] = '\0'; // Remove newline character

        printf("Batting Average: ");
        scanf("%f", &cricketers[i].average);
        getchar(); // Consume newline character left by scanf

        printf("Highest Score: ");
        scanf("%d", &cricketers[i].highest_score);
        getchar(); // Consume newline character left by scanf
    }
}

// Function to display cricketer details
void displayCricketerDetails(const cricket cricketers[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Cricketer Name: %s\n", cricketers[i].cricketer_name);
        printf("Team Name: %s\n", cricketers[i].team_name);
        printf("Batting Average: %.2f\n", cricketers[i].average);
        printf("Highest Score: %d\n", cricketers[i].highest_score);
        printf("-------------------------\n");
    }
}
