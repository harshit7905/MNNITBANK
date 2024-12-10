#include "header.h"

void salesman() {
    char array[city][20];
    printf("Please enter the city names:\n");
    for (int i=0;i<city;i++) {
        scanf("%s",array[i]);
    }
    cost=(int**)malloc(sizeof(int*)*city);
    for (int i=0;i<city;i++) {
        cost[i]=(int*)malloc(sizeof(int)*city);
    }
    for (int i=0;i<city;i++) {
        for (int j=0;j<city;j++) {
            if (i==j) {
                cost[i][j]=0;
            }
        }
    }
    for (int i=0;i<city;i++) {
        for (int j=0;j<city;j++) {
            if (i!=j) {
                printf("Enter cost from %s to %s:",array[i],array[j]);
                scanf("%d",&cost[i][j]);
            }
        }
    }
    dp=(int**)malloc(sizeof(int*)*(1<<city));
    int VISITED_ALL=(1<<city)-1;
    for (int i=0;i<(1<<city);i++) {
        dp[i]=(int*)malloc(sizeof(int)*city);
        for (int j=0;j<city;j++) {
            dp[i][j]=-1;
        }
    }
    int ans=tsp(1,0,city,VISITED_ALL);
    printf("Minimum cost of travelling is\n");
    printf("%d\n",ans);
    delay(10);
    free(cost);
}

int min(int a,int b) {
    if (a<b) {
        return a;
    }
    else {
        return b;
    }
}

int tsp(int mask,int pos,int city,int VISITED_ALL) {
    if (mask==VISITED_ALL) {
        return cost[pos][0];
    }
    else if (dp[mask][pos]!=-1) {
        return dp[mask][pos];
    }
    int ans=1e9;
    for (int i=0;i<city;i++) {
        if ((mask&(1<<i))==0) {
            int answer=cost[pos][i]+tsp((mask|(1<<i)),i,city,VISITED_ALL);
            ans=min(answer,ans);
        }
    }
    return dp[mask][pos]=ans;
}