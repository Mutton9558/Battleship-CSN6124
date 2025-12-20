// Shawn and Imran's part
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#define PORT 8080

typedef struct {
    // dynamically allocated name variable
    char* name;
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
    // loop thru file here
    fclose(file);
}

int main(){
    printf("Big boy server thing uwu");
    return 0;

    // free all dynamically allocated variables
}
