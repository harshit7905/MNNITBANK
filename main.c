#include "header.h"

void delay(int number_of_seconds) {
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while(clock() < start_time + milli_seconds);
}

int main() {
    MinimumACnoStart=(MinimumACno*)malloc(sizeof(MinimumACno));
    MinimumACnoEnd=(MinimumACno*)malloc(sizeof(MinimumACno));
    MinimumACnoPoint=(MinimumACno*)malloc(sizeof(MinimumACno));
    MinimumACnoStart=NULL;
    MinimumACnoEnd=NULL;
    MinimumACnoPoint=NULL;
    startPtr=(Account*)malloc(sizeof(Account)*2);
    MaxLen=2;
    Point=0;
    Last=-1;
    int First;
    while(1) {
        mainPrompt();     // Printing mainPrompt on screen
        scanf("%d",&First);
        first_Selection(First);
    }
    return 0;
}