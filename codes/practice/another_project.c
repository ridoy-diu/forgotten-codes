#include <stdio.h>
#include <stdlib.h>

// Define the structure for a ticket request
struct TicketRequest {
    int customerID;
    int numTickets;
    struct TicketRequest* next;
};

// Function to create a new ticket request
struct TicketRequest* createTicketRequest(int customerID, int numTickets) {
    struct TicketRequest* newRequest = (struct TicketRequest*)malloc(sizeof(struct TicketRequest));
    if (newRequest == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newRequest->customerID = customerID;
    newRequest->numTickets = numTickets;
    newRequest->next = NULL;
    return newRequest;
}

// Function to enqueue a ticket request
void enqueue(struct TicketRequest** front, struct TicketRequest** rear, int customerID, int numTickets) {
    struct TicketRequest* newRequest = createTicketRequest(customerID, numTickets);
    if (*front == NULL) {
        *front = newRequest;
        *rear = newRequest;
    } else {
        (*rear)->next = newRequest;
        *rear = newRequest;
    }
    printf("Customer %d requested %d ticket(s).\n", customerID, numTickets);
}

// Function to dequeue a ticket request
void dequeue(struct TicketRequest** front) {
    if (*front == NULL) {
        printf("No pending requests.\n");
    } else {
        struct TicketRequest* temp = *front;
        *front = (*front)->next;
        printf("Processing request from Customer %d for %d ticket(s).\n", temp->customerID, temp->numTickets);
        free(temp);
    }
}

// Function to display the pending ticket requests
void displayQueue(struct TicketRequest* front) {
    printf("Pending Ticket Requests:\n");
    struct TicketRequest* current = front;
    int index = 1;
    while (current != NULL) {
        printf("%d. Customer %d - %d ticket(s)\n", index, current->customerID, current->numTickets);
        current = current->next;
        index++;
    }
}

// Function to free the memory used by the queue
void freeQueue(struct TicketRequest* front) {
    while (front != NULL) {
        struct TicketRequest* temp = front;
        front = front->next;
        free(temp);
    }
}

int main() {
    struct TicketRequest* front = NULL;
    struct TicketRequest* rear = NULL;
    int choice;
    int customerID = 1;

    do {
        printf("\nMenu:\n");
        printf("1. Book Tickets\n");
        printf("2. Cancel Tickets\n");
        printf("3. Display Pending Requests\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int numTickets;
                    printf("Enter the number of tickets to book: ");
                    scanf("%d", &numTickets);
                    enqueue(&front, &rear, customerID, numTickets);
                    customerID++;
                }
                break;

            case 2:
                dequeue(&front);
                break;

            case 3:
                displayQueue(front);
                break;

            case 4:
                printf("Exiting the program.\n");
                freeQueue(front);  // Free the allocated memory
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 4);

    return 0;
}
