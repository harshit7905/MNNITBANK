#include "header.h"

int binarySearch(Account arr[],int l,int r,char x[30]) {
    if (r>=l) {
        int mid = l + (r-l) / 2;
        if (strcmp(arr[mid].name,x)==0) {
            return mid;
        }
        else if (strcmp(arr[mid].name,x)>0) {
            return binarySearch(arr,l,mid-1,x);
        }
        else if (strcmp(arr[mid].name,x)<0) {
            return binarySearch(arr,mid+1,r,x);
        }
    }  
    return -1;   
}

void acc_by_name(char name[30]) {
    Account* sort = (Account*)malloc(sizeof(Account)*MaxLen);
    sort=startPtr;
    qsort(sort,Last+1,sizeof(Account),comparator);
    int ans=binarySearch(sort,0,Last,name);
    if (ans==-1) {
        printf("Name not found in record\n");
    }
    else {
        printf("\e[1;1H\e[2J");
        printf("\n--------- Welcome To MNNIT Bank ---------\n");
        printf("A/C no\tName\tSurname\tDOB\t\tAge\tMobileNo\tAccount Type\n");
        printf("%d\t%s\t%s\t%s\t%d\t%lld\t",startPtr[ans].AccountNo,startPtr[ans].name,startPtr[ans].surname,startPtr[ans].DOB,startPtr[ans].Age,startPtr[ans].MobileNo);
        if (startPtr[ans].TOA==1) {
            printf("Saving\n");
        }
        else if (startPtr[ans].TOA==2) {
            printf("Current\n");
        }
    }
    delay(10);
}