// Shawn and Imran's part
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <pthread.h>
#define PORT 8080

typedef struct {
    char name[30];
    int client_fd;
    int score;
} Player;

// Opens score file
void load_score(Player playerQueue[]){
    const int max_players = 4;
    const playerCount = sizeof(playerQueue) / sizeof(playerQueue[0]);
    FILE *file = fopen("score.txt", "r");
    if(!file){
        file = fopen("score.txt", "w");
        if(!file){
            printf("Error in creating score file");
        } else {
            fclose(file);
            file = fopen("score.txt", "r");
        }
    }

    // Username: Wins
    // max 30 for username, 2 for the colon and whitespace, 10 for max int digits
    char line[42];
    fclose(file);
}

int main(){
    printf("Big boy server thing uwu");
    return 0;

    // free all dynamically allocated variables
}
