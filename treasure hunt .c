#include <stdio.h>

void finalRoom() {
    int chestChoice;
   
    scanf("%d", &chestChoice);
    if (chestChoice == 1) {
        printf("All that glitters is not gold, Game Over!\n");
    } else if (chestChoice == 2) {
        printf("All your efforts were for nothing, Game Over!\n");
    } else if (chestChoice == 3) {
        printf("Congratulations!! You won the treasure.\n");
    }
}

void leftPath() {
    int actionChoice, bridgeOutcome;
    
    scanf("%d", &actionChoice);
    if (actionChoice == 1) {
        printf("Poor choice, Game Over!\n");
    } else if (actionChoice == 2) {
        printf("Player found a bridge.\n");
        scanf("%d", &bridgeOutcome);
        if (bridgeOutcome == 1) {
            printf("Player crosses the bridge safely.\n");
            finalRoom();
        } else if (bridgeOutcome == 2) {
            printf("Poor luck, Game Over!\n");
        }
    }
}

void middlePath() {
    int puzzleAnswer;
    
    scanf("%d", &puzzleAnswer);
    if (puzzleAnswer == 582) {
        printf("Player solved the puzzle.\n");
        finalRoom();
    } else {
        printf("Foolish player, Game Over!\n");
    }
}

void rightPath() {
    int sequenceAnswer;
    
    scanf("%d", &sequenceAnswer);
    if (sequenceAnswer == 30) {
        printf("Player solved the puzzle.\n");
        finalRoom();
    } else {
        printf("Foolish player, Game Over!\n");
    }
}

int main() {
    int pathChoice;
    
    scanf("%d", &pathChoice);
    if (pathChoice == 1) {
        printf("Player chooses the Left path.\n");
        leftPath();
    } else if (pathChoice == 2) {
        printf("Player chooses the Middle path.\n");
        middlePath();
    } else if (pathChoice == 3) {
        printf("Player chooses the Right path.\n");
        rightPath();
    }
    return 0;
}
