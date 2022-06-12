//THIS IS A SIMPLE CALCULATOR PROGRAM


#include <stdio.h>
#include <stdlib.h>


void addFun();
void minFun();
void mulFun();
void divFun();
char opFUn(char type, char a, char b, char c, char d);

int main(){
    char type;
    printf("Welcome to Calculator\n-----------------------\n");
    printf("What operator do you want to work with: \na for addition\ns for subtraction\nm for multiplication\nd for division\n-------------\n");
    scanf("%c", &type);

    if(type == 'a'){
        printf("***ADDITION***\n");
        addFun();
        
    }else if(type == 's'){
        printf("***SUBTRACTION***\n");
        minFun();
    }else if(type == 'm'){
        printf("***MULTIPLICATION***\n");
        mulFun();
    }else if(type == 'd'){
        printf("***DIVISION***\n");
        divFun();
    }else{
        printf("ERROR! Give valid operator!\n");
    }

    return 0;
}
void addFun(){
    double i;
    double j;
    printf("First Number: ");
    scanf("%lf", &i);
    printf("Second Number: ");
    scanf("%lf", &j);
    printf("= %f \n---------------\n", i + j);


    return;

}

void minFun(){
    double k;
    double l;
    printf("First Number: ");
    scanf("%lf", &k);
    printf("Second Number: ");
    scanf("%lf", &l);
    printf("= %f\n--------------\n", k - l);
    return;


}

void mulFun(){
    double m;
    double n;
    printf("First number: ");
    scanf("%lf", &m);
    printf("Second number: ");
    scanf("%lf", &n);
    printf("= %f\n-------------\n", m*n);

    return;
}

void divFun(){
    double o;
    double p;
    printf("First number: ");
    scanf("%lf", &o);
    printf("Second number: ");
    scanf("%lf", &p);
    printf("= %f\n-------------\n", o/p);

    return;


}

