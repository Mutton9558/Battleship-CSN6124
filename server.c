// Shawn and Imran's part
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <pthread.h>

const int PORT = 8080;

typedef struct {
    char name[30];
    int client_fd;
    int score;
} Player;

// Opens score file
void load_score(Player *player){
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
    int score;
    char name[30];
    while(fgets(line, 42, file)){
        if(sscanf(line, "%[^:]: %d", name, &score) == 2){
            if(name == player->name){
                player->score = score;
            }
        }
    }
    fclose(file);
}

int main(){
    printf("Big boy server thing uwu");
    Player playerQueue[4];
    int playerCount = 0;
    // Socket stuff here
    // if new players join
    Player newPlayer;
    // initialisation stuff later
    playerQueue[playerCount] = newPlayer;
    playerCount++;
    return 0;
}
