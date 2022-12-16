#include<stdio.h>
int main(){
    int i,input,a,b,c,r=0;
    scanf("%d",&input);
    for(i=0;i<input;i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a||b||c==1 || a||b||c==0 ) && a+b+c>=2){
            r=r+1;
        }
    }
    printf("%d\n",r);
}
