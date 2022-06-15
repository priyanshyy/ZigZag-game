#include<stdio.h>
void main()
{
    int i;
    int x=1; //which we want to print

    for(i=0;i<6;i++){
        if(i%2!=0){
            printf(" -%d",x); //odd places
        }
        else printf(" %d",x); //even places

        x+=2; //x=x+2  ...to increase the value consecutively.
    }
}