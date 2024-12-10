#include "header.h"

void mainPrompt() {      // Main prompt
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    printf("1. Create an Account\n2. Deposit Amount\n3. Withdraw Funds\n4. Check Balance\n5. All Account Holder Details\n6. Close Account\n7. Modify Account\n8. Choose Bank Manager Option\n9. Home Banking Salesman\n10. Exit\nEnter one of the above options:");
}

void prompt() {
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    printf("1. Sorting\n2. Searching\n3. Exit\nEnter one of the above options:");
}