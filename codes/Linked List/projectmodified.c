#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 50

typedef struct NODE
{
    char data[MAX_LENGTH];
    struct NODE *next, *prev;
} node;

char temp[MAX_LENGTH];
node *head = NULL;
node *current_node = NULL;

void display_menu();
void insert_node();
void delete_node();
void show();
void next_node();
void prev_node();
void first_node();
void last_node();
void specific_node();
void save_playlist();
void load_playlist();

int main()
{
    int choice;
    printf("\      Song Playlist Application\n\n");
    display_menu();

    while (1)
    {
        printf("\nPick your choice: ");
        scanf("%d", &choice);
        printf("\n");

        load_playlist();

        switch (choice)
        {
        case 1:
            insert_node();
            break;
        case 2:
            delete_node();
            break;
        case 3:
            show();
            break;
        case 4:
            next_node();
            break;
        case 5:
            prev_node();
            break;
        case 6:
            first_node();
            break;
        case 7:
            last_node();
            break;
        case 8:
            specific_node();
            break;
        case 9:
            save_playlist();
            printf("Thank you for using the Song Playlist App.\n");
            exit(1);

        default:
            printf("Invalid choice. Please enter the correct choice.\n");
        }
    }
    return 0;
}

void display_menu()
{
    printf("      1. Add A Song\n");
    printf("      2. Remove a Song\n");
    printf("      3. Show Playlist\n");
    printf("      4. Play Next Song\n");
    printf("      5. Play Previous Song\n");
    printf("      6. Play First Song\n");
    printf("      7. Play Last Song\n");
    printf("      8. Play Specific Song\n");
    printf("      9. Exit\n\n");
}

void insert_node()
{
    printf("Enter Music Name: ");
    while ((getchar()) != '\n')
        ;
    scanf("%[^\n]%*c", temp);

    node *new_node = (node *)malloc(sizeof(node));
    strcpy(new_node->data, temp);

    printf("\n'%s' added to your list.\n", new_node->data);

    if (head == NULL)
    {
        new_node->next = new_node->prev = new_node;
        head = current_node = new_node;
        return;
    }
    node *last = head->prev;
    new_node->prev = last;
    last->next = new_node;
    new_node->next = head;
    head->prev = new_node;
}

void delete_node()
{
    if (head == NULL)
    {
        printf("No Music is there to delete!\n\n");
        return;
    }
    printf("Enter Music Name to delete: ");
    while ((getchar()) != '\n')
        ;
    scanf("%[^\n]%*c", temp);
    printf("\n");
    node *ptr = head;
    do
    {
        if (ptr->next == ptr && strcmp(ptr->data, temp) == 0)
        {
            printf("One file deleted! Playlist is Empty Now!\n\n");
            head = NULL;
            free(ptr);
            return;
        }
        else if (strcmp(ptr->data, temp) == 0)
        {
            node *prev = ptr->prev;
            node *next = ptr->next;
            prev->next = next;
            next->prev = prev;
            head = next;
            free(ptr);
            printf("Music deleted!\n\n");
            return;
        }
        ptr = ptr->next;
    } while (ptr != head);
    printf("No Music file is there!\n");
}

void show()
{
    if (head == NULL)
    {
        printf("Playlist is Empty!\n\n");
        return;
    }
    node *show_ptr = head;
    int i = 1;
    printf("Displaying Playlist: \n\n");
    do
    {
        printf("Song %d: %s\n", i, show_ptr->data);
        i++;
        show_ptr = show_ptr->next;
    } while (show_ptr != NULL);
}

void next_node()
{
    if (current_node == NULL)
    {
        printf("No songs in Playlist!\n\n");
    }
    else
    {
        current_node = current_node->next;
        printf("Playing Next Song: %s\n\n", current_node->data);
    }
}

void prev_node()
{
    if (current_node == NULL)
    {
        printf("No songs in Playlist!\n\n");
    }
    else
    {
        current_node = current_node->prev;
        printf("Playing Previous Song: %s\n\n", current_node->data);
    }
}

void first_node()
{
    if (head == NULL)
    {
        printf("Playlist is Empty!\n");
    }
    else
    {
        printf("Playing First Music: %s\n\n", head->data);
    }
}

void last_node()
{
    if (head == NULL)
    {
        printf("Playlist is Empty!\n");
    }
    else
    {
        printf("Playing Last Music: %s\n\n", head->prev->data);
    }
}

void specific_node()
{
    if (head == NULL)
    {
        printf("No music is there to be searched!\n\n");
        return;
    }
    printf("Enter Music Name to play: ");
    while ((getchar()) != '\n')
        ;
    scanf("%[^\n]%*c", temp);
    printf("\n");
    node *ptr = head;
    do
    {
        if (strcmp(ptr->data, temp) == 0)
        {
            printf("Music Found!\n");
            printf("Playing Music: %s\n\n", ptr->data);
            return;
        }
        ptr = ptr->next;
    } while (ptr != head);
    printf("There is no Music file with this name!\n");
}

void save_playlist()
{
    FILE *file = fopen("playlist.txt", "w");
    if (file == NULL)
    {
        perror("Error opening file for writing");
        return;
    }

    node *current = head;

    do
    {
        fprintf(file, "%s\n", current->data);
        current = current->next;
    } while (current != head);

    fclose(file);
}

void load_playlist()
{
    FILE *file = fopen("playlist.txt", "r");
    if (file == NULL)
    {
        // File doesn't exist or error opening, no problem, just return
        return;
    }

    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, file) != NULL)
    {
        // Remove newline character if present
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
        {
            buffer[len - 1] = '\0';
        }

        // Add the song to the playlist
        node *new_node = (node *)malloc(sizeof(node));
        strcpy(new_node->data, buffer);

        if (head == NULL)
        {
            new_node->next = new_node->prev = new_node;
            head = current_node = new_node;
        }
        else
        {
            node *last = head->prev;
            new_node->prev = last;
            new_node->next = head;
            last->next = head->prev = new_node;
        }
    }

    fclose(file);
}

