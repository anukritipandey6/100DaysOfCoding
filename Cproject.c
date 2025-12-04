#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 200   // Maximum number of records

// Structure to store each borrow/lend entry
struct Record {
    int id;
    char name[50];
    char item[50];
    float amount;
    char type[10];   // borrow or lend
    char date[20];   // DD-MM-YYYY format
};

// Function declarations
void addRecord(struct Record r[], int *count);
void viewRecords(struct Record r[], int count);
void searchRecord(struct Record r[], int count);
void deleteRecord(struct Record r[], int *count);
void summary(struct Record r[], int count);
void saveToFile(struct Record r[], int count);
void loadFromFile(struct Record r[], int *count);

int main() {
    struct Record r[MAX];
    int count = 0;
    int choice;

    loadFromFile(r, &count);   // Load file data at program start

    while (1) {
        // Displaying the menu
        printf("\n==== Hostel Borrow-Lend Tracker ====\n");
        printf("1. Add New Record\n");
        printf("2. View All Records\n");
        printf("3. Search Records\n");
        printf("4. Delete a Record\n");
        printf("5. Summary (Total Borrowed & Lent)\n");
        printf("6. Save & Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        getchar(); // Clearing leftover newline for multi-word input

        switch (choice) {
            case 1: addRecord(r, &count); break;
            case 2: viewRecords(r, count); break;
            case 3: searchRecord(r, count); break;
            case 4: deleteRecord(r, &count); break;
            case 5: summary(r, count); break;
            case 6:
                saveToFile(r, count);
                printf("Data saved. Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Add a new borrow/lend record
void addRecord(struct Record r[], int *count) {
    r[*count].id = *count + 1; // Assign unique ID

    printf("Enter Name: ");
    scanf(" %[^\n]", r[*count].name);   // Multi-word input

    printf("Enter Item/Money: ");
    scanf(" %[^\n]", r[*count].item);   // Multi-word input

    printf("Enter Amount (0 if only item): ");
    scanf("%f", &r[*count].amount);
    getchar();

    printf("Type (borrow/lend): ");
    scanf(" %[^\n]", r[*count].type);

    printf("Enter Date (DD-MM-YYYY): ");
    scanf(" %[^\n]", r[*count].date);

    (*count)++;
    printf("Record added successfully!\n");
}

// View all stored records
void viewRecords(struct Record r[], int count) {
    if (count == 0) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n---- All Records ----\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\nName: %s\nItem: %s\nAmount: %.2f\nType: %s\nDate: %s\n",
               r[i].id, r[i].name, r[i].item, r[i].amount, r[i].type, r[i].date);
    }
}

// Search records by name
void searchRecord(struct Record r[], int count) {
    char name[50];

    printf("Enter name to search: ");
    scanf(" %[^\n]", name);

    int found = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(r[i].name, name) == 0) {
            printf("\nRecord found!\n");
            printf("ID: %d\nName: %s\nItem: %s\nAmount: %.2f\nType: %s\nDate: %s\n",
                   r[i].id, r[i].name, r[i].item, r[i].amount, r[i].type, r[i].date);
            found = 1;
        }
    }

    if (!found)
        printf("No matching record found.\n");
}

// Delete a record by ID
void deleteRecord(struct Record r[], int *count) {
    int id;
    printf("Enter the ID to delete: ");
    scanf("%d", &id);

    int index = -1;

    // Finding the record
    for (int i = 0; i < *count; i++) {
        if (r[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Record not found.\n");
        return;
    }

    // Shifting the records up
    for (int i = index; i < *count - 1; i++) {
        r[i] = r[i + 1];
        r[i].id = i + 1; // Update ID numbers
    }

    (*count)--;
    printf("Record deleted successfully!\n");
}

// Show total borrowed and lent amounts
void summary(struct Record r[], int count) {
    float borrowed = 0, lent = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(r[i].type, "borrow") == 0)
            borrowed += r[i].amount;
        else if (strcmp(r[i].type, "lend") == 0)
            lent += r[i].amount;
    }

    printf("\n---- Summary ----\n");
    printf("Total Borrowed: %.2f\n", borrowed);
    printf("Total Lent: %.2f\n", lent);
}

// Save all records to file
void saveToFile(struct Record r[], int count) {
    FILE *fp = fopen("records.txt", "w");

    if (!fp) {
        printf("Error saving file!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d|%s|%s|%.2f|%s|%s\n",
                r[i].id, r[i].name, r[i].item, r[i].amount, r[i].type, r[i].date);
    }

    fclose(fp);
}

// Load records from file at startup
void loadFromFile(struct Record r[], int *count) {
    FILE *fp = fopen("records.txt", "r");
    if (!fp) return;

    while (fscanf(fp, "%d|%[^|]|%[^|]|%f|%[^|]|%[^\n]\n",
                  &r[*count].id,
                  r[*count].name,
                  r[*count].item,
                  &r[*count].amount,
                  r[*count].type,
                  r[*count].date) != EOF) {
        (*count)++;
    }

    fclose(fp);
}