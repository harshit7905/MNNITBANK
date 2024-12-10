#include "header.h"

void createAccount(){
    char arr[4];
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    Account temp;
    printf("Enter Your Name\n");
    scanf("%s",temp.name);
    printf("Enter Your Sur Name\n");
    scanf("%s",temp.surname);
    printf("Enter Your Age\n");
    scanf("%d",&temp.Age);
    printf("Enter Your Date of Birth\n");
    scanf("%s",temp.DOB);
    printf("Enter Your Mobile Number\n");
    scanf("%lld",&temp.MobileNo);
    printf("Type of Account : Press --> 1 for Savings \t Press --> 2 for Current \n ");
    scanf("%d",&temp.TOA);
    printf("Do you want ATM card? YES or NO\n");
    scanf("%s",arr);
    
int j=0;
char ch;
    while (arr[j]) {
        ch = arr[j];
        putchar(toupper(ch));
        j++;
    }
    if(strcmp(arr,"YES")==0){
        temp.ATM=1;
    } else {
        temp.ATM=0;
    }

    printf("Do you want Chequebook? YES or NO\n");
    scanf("%s",arr);
    j=0;
    while (arr[j]) {
        ch = arr[j];
        putchar(toupper(ch));
        j++;
    }

    if(strcmp(arr,"YES")==0){
        temp.cheque=1;
    } else {
        temp.cheque=0;
    }


    printf("What amount you want to deposit ?\n");
    scanf("%d",&temp.money);
    decidePoint();
    if(Point == MaxLen){
        startPtr=(Account*) realloc(startPtr,MaxLen*sizeof(Account)*2);
        MaxLen=MaxLen*2;
    }

    temp.AccountNo=Point;
    temp.Act_ID=1;
    startPtr[Point]=temp;

    printf("hell");

    printf("\e[1;1H\e[2J");

    printf("Your Account number is %d\n",Point);
    delay(10);
}

void depositFunds(){
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    
    int acc_no,amount;

    printf("ENTER ACCOUNT NUMBER = ");
    scanf("%d",&acc_no);

    if(startPtr[acc_no].Act_ID == 1){
        printf("\e[1;1H\e[2J");
        printf("ENTER THE AMOUNT TO BE ADDED : ");
        scanf("%d",&amount);

        startPtr[acc_no].money += amount;
        printf("SUCCESSFULLY ADDED\n");

    }
    else{
        printf("INVALID ACCOUNT NUMBER\n");
    }
    delay(10);

}

void withdrawFund(){
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    
    int acc_no,amount;

    printf("ENTER ACCOUNT NUMBER = ");
    scanf("%d",&acc_no);

    if(startPtr[acc_no].Act_ID == 1){
        printf("\e[1;1H\e[2J");
        printf("ENTER THE AMOUNT TO BE DEDUCTED : ");
        scanf("%d",&amount);
        min_notes(amount);
        startPtr[acc_no].money -= amount;

        printf("SUCCESSFULLY DEDUCTED \n");

    }
    else{
        printf("INVALID ACCOUNT NUMBER\n");
    }
    delay(10);

}


void checkBalance(){
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    
    int acc_no;

    printf("ENTER ACCOUNT NUMBER = ");
    scanf("%d",&acc_no);

    if(startPtr[acc_no].Act_ID == 1){
        printf("\e[1;1H\e[2J");
        printf("AVAILABLE BALANCE = %d",startPtr[acc_no].money);
    }
    else{
        printf("INVALID ACCOUNT NUMBER\n");
    }
    delay(10);

}

void allAccountHoldersDetails(){
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    
    printf("AccNo \t Name \t Surname \t Dob \t \t Age \t MobileNo \t AccType\n");

    for(int i=0;i<MaxLen;i++){
        if(startPtr[i].Act_ID == 1){
            printf("%d \t %s \t %s \t \t %s \t %d \t %lld \t",startPtr[i].AccountNo,startPtr[i].name,startPtr[i].surname,startPtr[i].DOB,startPtr[i].Age,startPtr[i].MobileNo);
            if(startPtr[i].TOA == 1) printf("SAVING\n");
            else printf("CURRENT\n");
        }
    }
    delay(10);
}

void closeAccount() {
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    int acc_no;
    printf("Enter your account number:");
    scanf("%d",&acc_no);
    if (startPtr[acc_no].Act_ID==1) {
        startPtr[acc_no].Act_ID=0;
    }
    else {
        printf("Account already deleted");
    }
    SetMinimumACno(acc_no);
    delay(10);
}

void modifyAccount() {
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    int acc_no;
    printf("Enter your account number:");
    scanf("%d",&acc_no);
    if (startPtr[acc_no].Act_ID==1) {
    printf("Enter your name\n");
    scanf("%s",startPtr[acc_no].name);
    printf("Enter your surname\n");
    scanf("%s",startPtr[acc_no].surname);
    printf("Enter your MobileNo.\n");
    scanf("%lld",&startPtr[acc_no].MobileNo);
    printf("Modifications done successfully\n");
    }
    else {
        printf("Invalid Account Number\n");
    }
    delay(10);
}



