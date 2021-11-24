/* Steef Loef */

#include <stdio.h>

int main()          /* Aanmaken functie */
{
    int grade;

    printf("Vul je cijfer in: ");
    scanf("%d", &grade);
    if (grade < 5.5 ) {
        printf("Je hebt een onvoldoende!\n");
    }
    else if (grade >= 5.5) {
        printf("Je hebt een voldoende!\n");
    }
    else if (grade < 0) {
        printf("Error\n");
    }
    else {
        printf("Je hebt een ongeldige cijfer ingevoerd.\n");
    }
    return 0;
}