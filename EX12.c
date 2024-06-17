#include <stdio.h>
int main(){
int i,j,k,n=6,indeg[6]={0},flag[6]={0},count=0; int a[6][6]={{0, 1, 0, 0, 0, 0},
{0, 0, 1, 1, 0, 0},
{0, 0, 0, 0, 0, 1},
{0, 0, 0, 0, 0, 1},
{1, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0}}; for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{ indeg[i]=indeg[i]+a[j][i];
}
}
printf("\nThe topological order is:"); while(count<n){
for(k=0;k<n;k++){ if((indeg[k]==0) && (flag[k]==0)){
printf("%d ",(k)); flag[k]=1; } for(i=0;i<n;i++){ if(a[i][k]==1)
indeg[k]--;
}
}
count++;
}
return 0;
}
