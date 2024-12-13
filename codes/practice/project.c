#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Include string.h for strcmp
#include <time.h>

// Define the structure for a song node
struct Song {
    char title[100];
    char artist[100];
    struct Song* next;
};

// Function to create a new song node
struct Song* createSong(const char* title, const char* artist) {
    struct Song* newSong = (struct Song*)malloc(sizeof(struct Song));
    if (newSong == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    snprintf(newSong->title, sizeof(newSong->title), "%s", title);
    snprintf(newSong->artist, sizeof(newSong->artist), "%s", artist);
    newSong->next = NULL;
    return newSong;
}

// Function to add a song to the playlist
void addSong(struct Song** playlist, const char* title, const char* artist) {
    struct Song* newSong = createSong(title, artist);
    if (*playlist == NULL) {
        *playlist = newSong;
    } else {
        struct Song* current = *playlist;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newSong;
    }
    printf("'%s' by %s added to the playlist.\n", title, artist);
}

// Function to remove a song from the playlist
void removeSong(struct Song** playlist, const char* title, const char* artist) {
    if (*playlist == NULL) {
        printf("The playlist is empty.\n");
        return;
    }
    
    struct Song* current = *playlist;
    struct Song* prev = NULL;

    while (current != NULL) {
        if (strcmp(current->title, title) == 0 && strcmp(current->artist, artist) == 0) {
            if (prev == NULL) {
                *playlist = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            printf("'%s' by %s removed from the playlist.\n", title, artist);
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("'%s' by %s not found in the playlist.\n", title, artist);
}

// Function to shuffle the playlist
void shufflePlaylist(struct Song** playlist) {
    srand(time(NULL));

    // Count the number of songs in the playlist
    int count = 0;
    struct Song* current = *playlist;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    // Create an array to store shuffled indices
    int* indices = (int*)malloc(count * sizeof(int));
    if (indices == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Initialize the array with sequential indices
    for (int i = 0; i < count; i++) {
        indices[i] = i;
    }

    // Fisher-Yates shuffle algorithm
    for (int i = count - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = indices[i];
        indices[i] = indices[j];
        indices[j] = temp;
    }

    // Create a new playlist with shuffled songs
    struct Song* shuffled = NULL;
    for (int i = 0; i < count; i++) {
        current = *playlist;
        int index = indices[i];
        for (int j = 0; j < index; j++) {
            current = current->next;
        }
        addSong(&shuffled, current->title, current->artist);
    }

    // Replace the original playlist with the shuffled playlist
    while (*playlist != NULL) {
        struct Song* temp = *playlist;
        *playlist = (*playlist)->next;
        free(temp);
    }
    *playlist = shuffled;

    free(indices);
}

// Function to display the playlist
void displayPlaylist(struct Song* playlist) {
    printf("Playlist:\n");
    struct Song* current = playlist;
    int index = 1;
    while (current != NULL) {
        printf("%d. '%s' by %s\n", index, current->title, current->artist);
        current = current->next;
        index++;
    }
}

// Function to free the memory used by the playlist
void freePlaylist(struct Song* playlist) {
    while (playlist != NULL) {
        struct Song* temp = playlist;
        playlist = playlist->next;
        free(temp);
    }
}

int main() {
    struct Song* playlist = NULL;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add a song to the playlist\n");
        printf("2. Remove a song from the playlist\n");
        printf("3. Shuffle the playlist\n");
        printf("4. Display the playlist\n");
        printf("5. Play a song\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    char title[100], artist[100];
                    printf("Enter song title: ");
                    scanf(" %99[^\n]", title);  // Read up to 99 characters until a newline
                    printf("Enter artist: ");
                    scanf(" %99[^\n]", artist);
                    addSong(&playlist, title, artist);
                }
                break;

            case 2:
                {
                    char title[100], artist[100];
                    printf("Enter song title to remove: ");
                    scanf(" %99[^\n]", title);
                    printf("Enter artist: ");
                    scanf(" %99[^\n]", artist);
                    removeSong(&playlist, title, artist);
                }
                break;

            case 3:
                shufflePlaylist(&playlist);  // Pass the playlist as a pointer
                printf("Playlist shuffled.\n");
                break;

            case 4:
                displayPlaylist(playlist);
                break;

            case 5:
                printf("Playing the first song in the playlist...\n");
                if (playlist != NULL) {
                    printf("Now playing: '%s' by %s\n", playlist->title, playlist->artist);
                } else {
                    printf("The playlist is empty.\n");
                }
                break;

            case 6:
                printf("Exiting the program.\n");
                freePlaylist(playlist);  // Free the allocated memory
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 6);

    return 0;
}
