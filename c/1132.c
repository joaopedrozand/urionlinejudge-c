#include<stdio.h>
int main(){
    int i,x,y,soma=0;
    scanf("%d %d",&x,&y);
    if(x>y){
        x = x + y;
        y = x - y;
        x = x - y;
    }
    for(i=x;i<=y;i++){
        if(i%13!=0)
            soma+=i;
    }
    printf("%d\n",soma);
    return 0;
}
