#include<stdio.h>

int convert(int type, int curr);

int main(){
    int type;
    float curr;
    printf("convert from: \n");
    printf("USD  EUR  INR\n");
    printf("1     2    3\n");
    scanf("%d", &type);
    if(type == 1){
        printf("enter USD: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 2){
        printf("enter EUR: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else{
        printf("enter INR: ");
        scanf("%f", &curr);
        convert(type, curr);
    }
    printf("npr: Rs.%d", convert(type, curr));
    
    return 0;
}

int convert(int type, int curr){
    int npr;
    if(type == 1){
        npr = 125 * curr;
        return npr;
    }else if(type == 2){
        npr = 127 * curr;
        return npr;
    }else{
        npr = 1.6 * curr;
        return npr;
    }
    return 0;
}
