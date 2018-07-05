#include <stdio.h>

int main()
{

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

    printf("%s %d/%d\n", playerCharacterName, playerCurrentHitPoints, playerMaxHitPoints);

    printf("%s %d/%d\n", enemyCharacterName, enemyCurrentHitPoints, enemyMaxHitPoints);

    return 0;
}
