#include "header.h"

void first_Selection(int a) {       // Selection functions
    switch(a){
        case 1:
            createAccount();
            break;
        case 2:
            depositFunds();
            break;
        case 3:
            withdrawFund();
            break;
        case 4:
            checkBalance();
            break;
        case 5:
            allAccountHoldersDetails();
            break;
        case 6:
            closeAccount();
            break;
        case 7: 
            modifyAccount();
            break;
        case 8: 
            managerOption();
            break;
        case 9:
            select_method();
            break;
        case 10:
            exit(1);
            break;
        default: 
            break;
    }

}

void managerSelection(int a) {
    switch(a){
        case 1: 
            sorts();
            break;
        case 2:
            printf("\e[1;1H\e[2J");
            printf("\n--------- Welcome To MNNIT Bank ---------\n");
            char name[20];
            scanf("%s",name);
            acc_by_name(name);
            break;
        case 3:
            exit(1);
            break;
        default:
            break;
    }
}