#include<stdio.h>
int main(){
    int maths,science;
    printf("if you are pass in the following subject then enter 1 \notherwise enter 0\n");
    printf("maths :\n");
    scanf("%d",&maths);
    printf("science :\n");
    scanf("%d",&science);
    if(maths && science){
        printf("you are too smart & you win $50");
    }
    else if(maths || science){
        printf("you get $15");
    }
    else{
        printf("you are dumb");
    }
    return 0;
}