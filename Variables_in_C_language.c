// int, float, double, bool, char, array
/*
int,
float,
double,
bool,
char,
array
*/
#include <stdio.h>
#include <stdbool.h> // for bool statements

int main(){

    //integer
    int age = 18;
    int year = 2025;
    int quantity = 3;

    printf("Your age is : %d\n",age);
    printf("This year is : %d\n",year);
    printf("You took %d items\n",quantity);

    //float
    float each_item_price = 249.99;
    float gpa = 9.9;
    float temperature = -4.71;

    printf("Each item price is : %f\n",each_item_price);
    printf("Your gpa is : %f\n",gpa);
    printf("Temperature is : %f°F\n",temperature);

    //double
    double pi = 3.141592;
    double e = 2.7568496;

    printf("Value of pi is : %.3lf\n",pi);
    printf("Value of e is : %.5lf\n",e);

    //bool
    bool areOnline = true; //1
    bool isOnline = false; //0
    bool areStudent = true; //1
    bool forSale = false; //0

    printf("%d\n",areOnline);
    printf("%d\n",isOnline);
    printf("%d\n",areStudent);
    printf("%d\n",forSale);

    //bool + "if" and "else" statements
    if(areOnline){
        printf("You are online\n");
    }
    else{
        printf("You are offline\n");
    }

    if(isOnline){
        printf("He is online\n");
    }
    else{
        printf("He is offline\n");
    }
    
    if(areStudent){
        printf("You are a student\n");
    }
    else{
        printf("You are not a student\n");
    }

    if(forSale){
        printf("That item is for sale\n");
    }
    else{
        printf("That item is not for sale\n");
    }

    //char
    char grade = 'A';
    char symbol = '@';
    
    printf("We use %c just before gmail\n",symbol);
    printf("Your grade is %c\n",grade);

    //array
    char name[] = "MR CSCode.Studio";
    char GRADE[] = "A++";
    char symbols[] = "!@#$^&*...";
    char food[] = "pizza";

    printf("Your grade is %s\n",GRADE);
    printf("%s\n",symbols);
    printf("Name is %s\n",name);
    printf("I like %s\n",food);
}
