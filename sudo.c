#include<stdio.h>
#define UNASSIGNED 0
#define N
int isValidSudoku(const char** A, int n1) {
   
   int *r=(int*)malloc(sizeof(int)*9);
   int i,j,k,m;
   for(i=0;i<n1;i++){
       for(j=0;j<9;j++)r[j]=0;
       k=0;
       while(A[i][k]!='\0'){
           if(A[i][k]=='.');
           else
           {
               if(r[A[i][k]-'1']>0)return 0;
               r[A[i][k]-'0'-1]++;
           }k++;
       }
       //for(j=0;j<9;j++)if(r[j]>1)return 0;
   }
   for(i=0;i<9;i++){
       for(j=0;j<9;j++)r[j]=0;
       k=0;
       while(k<n1){
           if(A[k][i]=='.');
           else{
           if(r[A[k][i]-'1']>0)return 0;
           r[A[k][i]-'1']++;
           }k++;
       }
       //for(j=0;j<9;j++)if(r[j]>1)return 0;
   }m=0;
   
   for(i=0;i<n1;i=i+3)
   {
       for(m=0;m<9;m=m+3){
       
       for(j=0;j<9;j++)r[j]=0;
       
       for(j=i;j<3+i;j++){
               for(k=m;k<3+m;k++){
                if(A[j][k]!='.')
                {
                if(r[A[j][k]-'1']>0)return 0;
                 r[A[j][k]-'1']++;
           }}
           }
           //for(j=0;j<9;j++)if(r[j]>1)return 0;
   }
       
   }
   return 1;
}
int main() 
{
   char A[N][N] = { "53..7....", "6..195...", ".98....6.",
                  "8...6...3", "4..8.3..1", "7...2...6"
                  ".6....28.", "...419..5", "....8..79"}
   if(isValidSudoku == true)
          printf("Sudoku is valid");
    else
          printf("not valid");
return 0;
} 


