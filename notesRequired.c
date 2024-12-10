#include "header.h"

void min_notes(long long int amt) {
    printf("\e[1;1H\e[2J");
    int notes[9]={1,2,5,10,20,50,100,200,500};

    int dp[10][amt+1];

    for(int i=0;i<=amt;i++) dp[0][i]=i;

    for(int i=1;i<9;i++){
        for(int j=0;j<=amt;j++){
            int notTake=dp[i-1][j];

            int take=1e9;
            if(notes[i]<=j){
                take=1+dp[i][j-notes[i]];
            }

            dp[i][j]=min(take,notTake);
        }
    }
    

    printf("TOTAL NOTES REQUIRED: %d\n",dp[8][amt]);

    
    int i=8,j=amt,cnt=0;
    int value[9]={0};

    while(i>0 && j>=0){
        if(notes[i]>j){
            value[i]=cnt;
            cnt=0;
            i--;
        }
        else{
            if(dp[i][j-notes[i]]<dp[i-1][j]){
                cnt++;
                j=j-notes[i];
            }
            else{
                value[i]=cnt;
                cnt=0;
                i--;
            }
        }
    }
    if(i>=0) value[i]=j;

    printf("Amount of Note\t Count\n");

    for(int i=8;i>=0;i--){
        if(value[i]!=0) printf("%d \t\t %d\n",notes[i],value[i]);
    }

}