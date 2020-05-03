#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int len=0;
int flag=0,n1=0,n2=0;
int adj[1000][1000];
int A[100000],B[100000];
void dfs(int x,int y){
    if(x==A[n1-1]&&y==B[n2-1]){
        flag=1;
        return;
    }
    if(adj[x][y]==0)
    return;
    if(adj[x][y]==1){
        printf("%d %d\n",x,y);
        len++;
        adj[x][y]=0;
        if(adj[x+1][y+1]==1)
         dfs(x+1,y+1);
         else if(adj[x-1][y-1]==1)
          dfs(x-1,y-1);
      else if(adj[x-1][y+1]==1)
            dfs(x-1,y+1);
        else if(adj[x+1][y-1]==1)
        dfs(x+1,y-1);
        else if(adj[x+1][y]==1)
        dfs(x+1,y);
        else if(adj[x-1][y]==1)
        dfs(x-1,y);
        else if(adj[x][y+1]==1)
        dfs(x,y+1);
        else if(adj[x][y-1]==1)
        dfs(x,y-1);
    else
        return;
       
       
    }
}
int main() {
    scanf("%d %d",&n1,&n2);

    if(n1<0||n2<0)
    return 0;
    
    int i=0;
    for(i=0;i<n1;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&B[i]);
    }
    memset(adj,0,n1*n2*adj[0][0]);
    for(i=0;i<n1;i++){
        adj[A[i]][B[i]]=1;
        
    }
    int min=999999;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("XXXXXXXXXX\n");
            dfs(A[i],B[j]); 
            if(flag==1){
            if((len<min)&&(len!=0)){
                min=len;
            }
            len=0;
    }
        }
    }
   
    printf("%d\n",min);
    
   return 0;
}
