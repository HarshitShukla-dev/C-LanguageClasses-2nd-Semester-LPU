#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
#define MAX_PHONE_LENGTH 15
#define MAX_EMAIL_LENGTH 50

// Struct to represent a contact
typedef struct
{
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    char phone[MAX_PHONE_LENGTH];
    char email[MAX_EMAIL_LENGTH];
} Contact;

// Global array to store contacts
Contact contacts[MAX_CONTACTS];

int numContacts = 0; // Number of contacts currently in the phonebook

// Function prototypes
void addContact();
void viewAllContacts();
void editContact();
void searchContact();
void deleteContact();
void saveContactsToFile();
void loadContactsFromFile();

int main()
{
    loadContactsFromFile(); // Load contacts from file (if any)
    int choice;

    do
    {
        printf("Phonebook Management System\n");
        printf("1. Add a contact\n");
        printf("2. View all contacts\n");
        printf("3. Edit a contact\n");
        printf("4. Search for a contact\n");
        printf("5. Delete a contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            viewAllContacts();
            break;
        case 3:
            editContact();
            break;
        case 4:
            searchContact();
            break;
        case 5:
            deleteContact();
            break;
        case 6:
            saveContactsToFile(); // Save contacts to file before exiting
            printf("Thank you for using the Phonebook Management System. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (1);

    return 0;
}

void addContact()
{
    if (numContacts == MAX_CONTACTS)
    {
        printf("Phonebook is full. Cannot add more contacts.\n");
        return;
    }

    Contact newContact;
    printf("Enter name: ");
    getchar(); // Clear input buffer
    fgets(newContact.name, MAX_NAME_LENGTH, stdin);
    newContact.name[strcspn(newContact.name, "\n")] = '\0'; // Remove newline character

    printf("Enter address: ");
    fgets(newContact.address, MAX_ADDRESS_LENGTH, stdin);
    newContact.address[strcspn(newContact.address, "\n")] = '\0'; // Remove newline character

    printf("Enter phone number: ");
    fgets(newContact.phone, MAX_PHONE_LENGTH, stdin);
    newContact.phone[strcspn(newContact.phone, "\n")] = '\0'; // Remove newline character

    printf("Enter email: ");
    fgets(newContact.email, MAX_EMAIL_LENGTH, stdin);
    newContact.email[strcspn(newContact.email, "\n")] = '\0'; // Remove newline character

    contacts[numContacts++] = newContact;
    printf("Contact added successfully.\n");
}

void viewAllContacts()
{
    if (numContacts == 0)
    {
        printf("No contacts found.\n");
        return;
    }

    printf("Contacts in the phonebook:\n");
    for (int i = 0; i < numContacts; i++)
    {
        printf("Contact %d:\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Address: %s\n", contacts[i].address);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
    }
}

void editContact()
{
    if (numContacts == 0)
    {
        printf("No contacts found.\n");
        return;
    }

    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name of the contact to edit: ");
    getchar(); // Clear input buffer
    fgets(searchName, MAX_NAME_LENGTH, stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove newline character

    int foundIndex = -1;
    for (int i = 0; i < numContacts; i++)
    {
        if (strcmp(searchName, contacts[i].name) == 0)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        printf("Contact not found.\n");
        return;
    }

    printf("Enter new name (or press enter to skip): ");
    fgets(contacts[foundIndex].name, MAX_NAME_LENGTH, stdin);
    contacts[foundIndex].name[strcspn(contacts[foundIndex].name, "\n")] = '\0'; // Remove newline character

    printf("Enter new address (or press enter to skip): ");
    fgets(contacts[foundIndex].address, MAX_ADDRESS_LENGTH, stdin);
    contacts[foundIndex].address[strcspn(contacts[foundIndex].address, "\n")] = '\0'; // Remove newline character

    printf("Enter new phone number (or press enter to skip): ");
    fgets(contacts[foundIndex].phone, MAX_PHONE_LENGTH, stdin);
    contacts[foundIndex].phone[strcspn(contacts[foundIndex].phone, "\n")] = '\0'; // Remove newline character

    printf("Enter new email (or press enter to skip): ");
    fgets(contacts[foundIndex].email, MAX_EMAIL_LENGTH, stdin);
    contacts[foundIndex].email[strcspn(contacts[foundIndex].email, "\n")] = '\0'; // Remove newline character

    printf("Contact edited successfully.\n");
}

void searchContact()
{
    if (numContacts == 0)
    {
        printf("No contacts found.\n");
        return;
    }

    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name of the contact to search: ");
    getchar(); // Clear input buffer
    fgets(searchName, MAX_NAME_LENGTH, stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove newline character

    int foundIndex = -1;
    for (int i = 0; i < numContacts; i++)
    {
        if (strcmp(searchName, contacts[i].name) == 0)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        printf("Contact not found.\n");
        return;
    }

    printf("Contact found:\n");
    printf("Name: %s\n", contacts[foundIndex].name);
    printf("Address: %s\n", contacts[foundIndex].address);
    printf("Phone: %s\n", contacts[foundIndex].phone);
    printf("Email: %s\n", contacts[foundIndex].email);
}

void deleteContact()
{
    if (numContacts == 0)
    {
        printf("No contacts found.\n");
        return;
    }

    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name of the contact to delete: ");
    getchar(); // Clear input buffer
    fgets(searchName, MAX_NAME_LENGTH, stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove newline character

    int foundIndex = -1;
    for (int i = 0; i < numContacts; i++)
    {
        if (strcmp(searchName, contacts[i].name) == 0)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        printf("Contact not found.\n");
        return;
    }

    // Shift all contacts after the deleted contact to fill the gap
    for (int i = foundIndex; i < numContacts - 1; i++)
    {
        contacts[i] = contacts[i + 1];
    }

    numContacts--;

    printf("Contact deleted successfully.\n");
}

// Define a struct to represent a contact
struct Contact {
    char name[100];
    char email[100];
    char phone[20];
};

// Function declaration for viewContacts()
void viewContacts();

// Function definition for saveContactsToFile()
void saveContactsToFile() {
    FILE *file = fopen("contacts.txt", "w"); // Open file in write mode

    if (file == NULL) {
        printf("Failed to open file for writing.\n");
        return;
    }

    // Create an array of contacts
    struct Contact contacts[] = {
        {"John Doe", "john.doe@example.com", "1234567890"},
        {"Jane Smith", "jane.smith@example.com", "9876543210"},
        // Add more contacts as needed
    };

    // Write contacts to file
    for (int i = 0; i < sizeof(contacts) / sizeof(struct Contact); i++) {
        fprintf(file, "%s;%s;%s\n", contacts[i].name, contacts[i].email, contacts[i].phone);
    }

    printf("Contacts saved to file successfully.\n");

    // Close the file
    fclose(file);
}

// Function definition for loadContactsFromFile()
void loadContactsFromFile() {
    FILE *file = fopen("contacts.txt", "r"); // Open file in read mode

    if (file == NULL) {
        printf("Failed to open file for reading.\n");
        return;
    }

    // Read contacts from file
    struct Contact contacts[100]; // Assuming maximum of 100 contacts
    int numContacts = 0; // Variable to keep track of number of contacts read

    while (fscanf(file, "%[^;];%[^;];%s\n", contacts[numContacts].name, contacts[numContacts].email, contacts[numContacts].phone) == 3) {
        numContacts++;
    }

    printf("Loaded %d contacts from file.\n", numContacts);

    // Close the file
    fclose(file);

    // Display loaded contacts
    printf("Contacts:\n");
    for (int i = 0; i < numContacts; i++) {
        printf("Name: %s\n", contacts[i].name);
        printf("Email: %s\n", contacts[i].email);
        printf("Phone: %s\n", contacts[i].phone);
        printf("\n");
    }
}