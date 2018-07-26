#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    char playerCharacterName[] = "jeff";
    char enemyCharacterName[] = "bob";

    int playerMaxHitPoints;
    playerMaxHitPoints = 10;

    int enemyMaxHitPoints;
    enemyMaxHitPoints = 10;

    int playerCurrentHitPoints;
    playerCurrentHitPoints = 10;

    int enemyCurrentHitPoints;
    enemyCurrentHitPoints = 10;

    int playerAttack = 1;

    int enemyAttack = 1;

    int playerDodge = 50;

    int enemyDodge = 50;

    printf("%s %d/%d\n", playerCharacterName,
           playerCurrentHitPoints,
           playerMaxHitPoints);

    printf("%s %d/%d\n", enemyCharacterName,
           enemyCurrentHitPoints,
           enemyMaxHitPoints);

    if((rand() % 100 + 1) > enemyDodge){
        enemyCurrentHitPoints = enemyCurrentHitPoints - playerAttack;
    }

    //right here do enemy attacks player code
    //this will finish the round of combat

    printf("%s %d/%d\n", playerCharacterName,
           playerCurrentHitPoints,
           playerMaxHitPoints);

    printf("%s %d/%d\n", enemyCharacterName,
           enemyCurrentHitPoints,
           enemyMaxHitPoints);

    return 0;
}





