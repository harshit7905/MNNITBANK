#include "header.h"
void sorts() {
    Account* sort = (Account*)malloc(sizeof(Account)*MaxLen);
    sort=startPtr;
    int choice;
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    printf("\nHow do you want to sort?\n\n1. By A/C no\n\n2. By Age\n\n3. By Name\n\n4. Exit\n\n");
    scanf("%d",&choice);
    if (choice==1) {
        mergeSort(sort,0,Last);
        print(sort);
    }
    else if (choice==2) {
        mergeSort_age(sort,0,Last);
        print(sort);
    }
    else if (choice==3) {
        sort_by_name();
    }
    else {
        exit(0);
    }
}