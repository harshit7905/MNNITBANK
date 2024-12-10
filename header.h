/*Including all headers file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>


/* Structure for Details of Accounts */
typedef struct Account {
    int Act_ID;             // If 1 it means account is active
    int AccountNo;          // This is randomly generated which is always minimum possible number
    char name[20];
    char surname[20];
    char DOB[20];                // Format dd/mm/yyyy
    int Age;
    long long int MobileNo;
    int ATM;     
    int TOA;           // 0 for No and 1 for Yes
    int cheque;
    int money;
} Account;

/* Initialize Storing Element */
Account* startPtr;          // Array to store customers
int MaxLen;                 // Max possible customers
int Point;                  // This is point for next position for customer
int Last;                   // Storing last AccountNo
int city;

typedef struct MinimumACno {  // Linked list for getting minimum account number
    int number;
    struct MinimumACno* next;
} MinimumACno;

MinimumACno* MinimumACnoStart;   // Pointing first element of linked list
MinimumACno* MinimumACnoEnd;     // Pointing last element of linked list
MinimumACno* MinimumACnoPoint;   // Pointing next element of linked list

int** cost;
int** dp;

/*Declaring prompt functions*/
void mainPrompt();
void prompt();

/* Declaring Selection Functions */
void depositFunds();
void withdrawFund();
void checkBalance();
void allAccountHoldersDetails();
void managerOption();
void decidePoint();
void first_Selection(int a);
void managerSelection(int a);
void decidePoint();
void createAccount();
void closeAccount();
void modifyAccount();


void print(Account* acc);

/*Setting minimum account  number*/
void SetMinimumACno(int);

/* Manager Developer Functions */
void sorts();

/* Divide and Conquer */
void mergeSort(Account arr[], int l, int r);
void mergeSort_age(Account arr[], int l, int r);
void merge(Account arr[], int l, int m, int r);
void merge_age(Account arr[], int l, int m, int r);

/* Min Notes */
void min_notes(long long int amount);
void dfs(int v,bool vis[],int graph[][city]);
int findMinKey(int key[], bool mstSet[]);
void primMST();
void select_method();
void approximation();


void salesman();
int tsp(int mask, int pos, int city, int VISITED_ALL);
int min(int a, int b);


void acc_by_name(char name[30]);
int binarySearch(Account arr[], int l, int r, char x[30]);
int comparator(const void *b1,const void *b2);
void sort_by_name();
void delay(int number_of_seconds);






