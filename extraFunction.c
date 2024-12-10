#include "header.h"

void decidePoint() {
    if (MinimumACnoStart!=NULL) {
        Point=MinimumACnoStart->number;
        MinimumACnoStart=MinimumACnoStart->next;
    }
    else {
        Point=Last+1;
        Last++;
    }
}

void SetMinimumACno(int num) {
    MinimumACno* temp=(MinimumACno*)malloc(sizeof(MinimumACno));
    temp->number=num;
    temp->next=NULL;
    MinimumACnoPoint=(MinimumACno*)malloc(sizeof(MinimumACno));
    MinimumACnoPoint->next=MinimumACnoStart;
    if (MinimumACnoStart==NULL) {
        MinimumACnoStart=temp;
    }
    else if (MinimumACnoStart->next==NULL) {
        if (MinimumACnoStart->number>temp->number) {
            temp->next=MinimumACnoStart;
            MinimumACnoStart=temp;
        }
        else {
            temp->next=MinimumACnoStart->next;
            MinimumACnoStart->next=temp;
        }
    }
    else {
        if (MinimumACnoStart->number>temp->number) {
            temp->next=MinimumACnoStart;
            MinimumACnoStart=temp;
        }
        while(MinimumACnoPoint->next!=NULL) {
            if (MinimumACnoPoint->next->number>temp->number) {
                temp->next=MinimumACnoPoint->next;
                MinimumACnoPoint->next=temp;
                break;
            }
            MinimumACnoPoint=MinimumACnoPoint->next;
        }
        if (MinimumACnoPoint->next==NULL) {
            temp->next=MinimumACnoPoint->next;
            MinimumACnoPoint->next=temp;
        }
    }
}
void managerOption() {
    int a;
    prompt();
    scanf("%d",&a);
    managerSelection(a);
}

void print(Account* acc) {
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    printf("A/C no\tName\tSurname\tDOB\t\tAge\tMobile No\tAccount Type\n");
    for (int i=0;i<Last+1;i++) {
          if (acc[i].Act_ID==1) {
            printf("%d\t%s\t%s\t%s\t%d\t%lld\t",acc[i].AccountNo,acc[i].name,acc[i].surname,acc[i].DOB,acc[i].Age,acc[i].MobileNo);
            if (acc[i].TOA==1) {
                printf("Saving\n");
            }
            else {
                printf("Current\n");
            }
          }
    }
    delay(10);
}

int comparator(const void *b1,const void *b2) {
    Account *a1=(Account*) b1;
    Account *a2=(Account*) b2;
    return strcmp(a1->name,a2->name);
}

void sort_by_name() {
    Account* sort=(Account*)malloc(sizeof(Account)*MaxLen);
    sort=startPtr;
    qsort(sort,Last+1,sizeof(Account),comparator);
    print(sort);
}

void select_method() {
    int n;
    printf("\e[1;1H\e[2J");
    printf("\n--------- Welcome To MNNIT Bank ---------\n");
    printf("1. Brute Force Method\n2. Approximation Method\n\n");
    scanf("%d",&n);
    if (n==1) {
        printf("How many city he has to visit:");
        scanf("%d",&city);
        salesman();
    }
    else if (n==2) {
        printf("How many city he has to visit:");
        scanf("%d",&city);
        approximation();
    }
}