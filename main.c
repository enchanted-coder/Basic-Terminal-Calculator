//THIS IS A SIMPLE CALCULATOR PROGRAM

#include <stdio.h>
#include <stdlib.h>


double addFun(double i, double j);
double minFun(double k, double l);
double mulFun(double m, double n);
double divFun(double o, double p);
void calcFunc();

int main(){
    calcFunc();
    
    return 0;
}
double addFun(double i, double j){
    return i+j;
}

double minFun(double k, double l){
    return k-l;

}

double mulFun(double m, double n){
    return m*n;
}

double divFun(double o, double p){
    return o/p;
}

void calcFunc(){
    char type;
    printf("Welcome to Calculator\n-----------------------\n");
    printf("What operator do you want to work with: \na for addition\ns for subtraction\nm for multiplication\nd for division\n-------------\n");
    scanf("%c", &type);

    if(type == 'a'){
    printf("***ADDITION***\n");
    double num1;
    double num2;
    printf("First Number: ");
    scanf("%lf", &num1);
    printf("Second Number: ");
    scanf("%lf", &num2);
    printf("= %f \n---------------\n", addFun(num1, num2));
        
        
    }else if(type == 's'){
    printf("***SUBTRACTION***\n");
    double num1;
    double num2;
    printf("First Number: ");
    scanf("%lf", &num1);
    printf("Second Number: ");
    scanf("%lf", &num2);
    printf("= %f \n---------------\n", minFun(num1, num2));
    }else if(type == 'm'){
    printf("***MULTIPLICATION***\n");
    double num1;
    double num2;
    printf("First Number: ");
    scanf("%lf", &num1);
    printf("Second Number: ");
    scanf("%lf", &num2);
    printf("= %f \n---------------\n", mulFun(num1, num2));
        
    }else if(type == 'd'){
        printf("***DIVISION***\n");
    double num1;
    double num2;
    printf("First Number: ");
    scanf("%lf", &num1);
    printf("Second Number: ");
    scanf("%lf", &num2);
    printf("= %f \n---------------\n", divFun(num1, num2));
    }else{
        printf("ERROR! Give valid operator!\n");
    }
    return;
}
