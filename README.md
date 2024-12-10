# MNNITBANK
# Overview :-
Bank Management is based on the concept of creating and storing customer's account details. Here the user can perform all the tasks like creating an account, deposit amount, withdraw amount, check balance, view all account holders details, close an account, modify an account.

Talking about the features of the Bank Management, a user can create an account by providing the name of the account holder, select amount type whether it's a Saving account or Current account, and providing an initial amount. The account number is auto-generated. Then the user can also deposit or withdraw money just by providing his/her account number, then the system displays his/her profile and entering an amount. For certain purposes, he/she can also check for the balance inquiry which displays the amount currently available in the respective account. He/She can also check for all account holders details. Another feature is that the user can close their account by just providing their account number and he/she can also modify their account detail if they want to.

# Features :-
1. Create an account
2. Deposit amount
3. Withdraw funds
4. Check balance
5. All account holders details
6. Close account
7. Modify account
8. Bank manager option
9. Home banking salesman

# Manager Option :-

# Algorithms -
1. Merge Sort ( Example of divide and conquer ) ( O(nlogn) )
   * By Age
   * By A/C no
   * By Name
2. Binary Search ( O(logn) )
   * Just providing name if it exist then show all details.

# Some Implementations :-

# Less Memory 
1. If user execute code for first time then we have global variable startPtr which has only 2 index.
2. If 2 index is full then we allocate double of 2 that is 4.
3. Just like 2,4,8,16.
4. Just by using malloc and realloc.

# Minimum Number for Account Number 
1. If there are 5 account holders and suddenly account number = 2 closes their account then if the new user will come then he/she will be given account number = 2 not account number = 6.
2. Time Complexity O(1).
3. Using Linked List.

# On Delete Operation 
1. I have to include that account number in linked list for future creation.
2. It takes O(n) in worst case.

# Withdraw Money 
1. At this time I implemented minimum currency problem with ATM.
2. Here I have 1,2,5,10,20,50,100,200,500 currency which uses minimum number of currencys.
3. It is Dynamic Programming method.

# Travelling Salesman 
1. Here we have one salesman who is providing home banking.
2. So I implemented TSP to save petrols and the cost of travelling.
3. This approach is native approach by DP but it takes lot of time.
4. This is brute force method which takes O((n-1)!) time which is not polynomial so we will not consider that.

   * But in real world there is no solution for TSP but there exists a approximate solution.

5. There is 2-approximation and 3/2-approximation.

# 2-Approximation
1. To use this approximation triangular inequality must be true.
2. What is triangular inequality.
   * If there are 3 nodes a,b,c and there is an edge between ab bc and ac then cost(ab) + cost(bc) >= cost(ac).
3. Steps :-
   * Let 0 be the starting and ending point for salesman.
   * Construct Minimum Spanning Tree with taking 0 as root using Prim's Algorithm.
   * List vertices visited in Depth First Search of the constructed MST and calculate the cost.
   * It gives solution of O(polynomial).

# How to run the code ?
1. Copy and paste the below command on the terminal.
   * gcc -o my_app Bank.c binarySearch.c divideandconquer.c extraFunction.c main.c managerDev.c notesRequired.c prompt.c selection.c tsp_approximation.c TSP.c
2. Then run the following code on the terminal.
   * my_app.exe    
   
   
