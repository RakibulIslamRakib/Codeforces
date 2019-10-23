#include<bits/stdc++.h>
using namespace std;
int visited[200002];
int ans[200002];
int main(){
int q,n,arr[100002];
scanf("%d",&q);
while(q--){
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        scanf("%d",&arr[j]);
    }
    int clr=1;
    memset(visited,0,sizeof(visited));
    for(int j=1;j<=n;j++){
            if(j!=1){printf(" ");}
            if(visited[j]!=0){
                printf("%d",ans[visited[j]]);
            }
            else{
                int cnt=1;
        int tmp=arr[j];
        while(1){
            visited[tmp]=clr;
            if(tmp==j){
                ans[clr]=cnt;
                clr++;
                printf("%d",cnt);
                break;
            }
            cnt++;
            tmp=arr[tmp];
        }

    }
    }
    printf("\n");
}
}





