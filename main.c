#include <stdio.h>
#include <stdlib.h>

void addFun(double *a, double *b);
void subFun(double *c, double *d);
void mulFun(double *e, double *f);
void divFun(double *g, double *h);
void calcFun();

int main(){
    
    calcFun();
    return 0;
}

void addFun(double *a, double *b){
    *a = *a + *b;
}

void subFun(double *c, double *d){
    *c = *c - *d;
}

void mulFun(double *e, double *f){
    *e = *e * *f;
}

void divFun(double *g, double *h){
    *g = *g / *h;
}

void calcFun(){

    char choice;
    system("cls");
    
    printf("'a' for Addition\n's' for Subtraction\n'm' for Multiplication\n'd' for Division\n");
    printf("What operation do you want to perform: ");
    scanf("%c", &choice);

    if(choice == 'a'){
        // addition operation
        double x;
        double y;

        printf("Input first number: ");
        scanf("%lf", &x);
        printf("Input second number: ");
        scanf("%lf", &y);

        addFun(&x, &y);
        printf("= %f\n", x);
    }else if(choice == 's'){
        // subtraction operation
        double x;
        double y;

        printf("Input first number: ");
        scanf("%lf", &x);
        printf("Input second number: ");
        scanf("%lf", &y);

        subFun(&x, &y);
        printf("= %f\n", x);
    }else if(choice == 'm'){
        // multiplication operation
        double x;
        double y;

        printf("Input first number: ");
        scanf("%lf", &x);
        printf("Input second number: ");
        scanf("%lf", &y);

        mulFun(&x, &y);
        printf("= %f\n", x);
    }else if(choice == 'd'){
        // division operation
        double x;
        double y;

        printf("Input first number: ");
        scanf("%lf", &x);
        printf("Input second number: ");
        scanf("%lf", &y);

        divFun(&x, &y);
        printf("= %f\n", x);
    }else{
        calcFun();
    }

}