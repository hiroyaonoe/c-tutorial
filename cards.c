/*
* comment
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    puts("Please input a card name:");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
        val = atoi(card_name);
    }
    if ((val >= 3) && (val <= 6))
        puts("Count increases");
    else if (val == 10)
        puts("Count decreases");
    return 0;
}
