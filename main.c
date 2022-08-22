#include<stdio.h>

float convert(int type, float curr);

int main(){
    int type;
    float curr;
    printf("convert from: \n");
    printf("USD  EUR  INR  WON  YEN  CAD  AUD  GPB  KWD  BHD\n");
    printf("1     2    3    4    5    6    7    8    9    10\n");
    scanf("%d", &type);
    if(type == 1){
        printf("enter USD: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 2){
        printf("enter EUR: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 3){
        printf("enter INR: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 4){
        printf("enter WON: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 5){
        printf("enter YEN: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 6){
        printf("enter CAD: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 7){
        printf("enter AUD: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 8){
        printf("enter GBP: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else if(type == 9){
        printf("enter KWD: ");
        scanf("%f", &curr);
        convert(type, curr);
    }else{
        printf("enter BHD: ");
        scanf("%f", &curr);
        convert(type, curr);
    }
    printf("npr: Rs.%f", convert(type, curr));
    
    return 0;
}

float convert(int type, float curr){
    float npr;
    if(type == 1){
        npr = 125 * curr;
        return npr;
    }else if(type == 2){
        npr = 127 * curr;
        return npr;
    }else if(type == 3){
        npr = 1.6 * curr;
        return npr;
    }else if(type == 4){
        npr = 0.095 * curr;
        return npr;
    }else if(type == 5){
        npr = 0.93 * curr;
        return npr;
    }else if(type == 6){
        npr = 97.98 * curr;
        return npr;
    }else if(type == 7){
        npr = 87.90 * curr;
        return npr;
    }else if(type == 8){
        npr = 150.48 * curr;
        return npr;
    }else if(type == 9){
        npr = 415.10 * curr;
        return npr;
    }else if(type == 10){
        npr = 338.85 * curr;
        return npr;
    }
    return 0;
}
