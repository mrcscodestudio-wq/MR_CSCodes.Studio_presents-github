/*
calculator by Scanf + &variable + if and 
else statements
*/

#include <stdio.h>

int main(){
    char operation;
    printf("+,-,*,/: ");
    scanf("%c",&operation);
    if(operation == '+'){
        int a;
        printf("a : ");
        scanf("%d",&a);
        int b;
        printf("b : ");
        scanf("%d",&b);
        int c;
        printf("c : ");
        scanf("%d",&c);
        printf("a + b : %d\n",a + b);
        printf("a + b + c : %d\n",a + b + c);
    }
    else if(operation == '-'){
        int a;
        printf("a : ");
        scanf("%d",&a);
        int b;
        printf("b : ");
        scanf("%d",&b);
        int c;
        printf("c : ");
        scanf("%d",&c);
        printf("a - b : %d\n",a - b);
        printf("a - b - c : %d\n",a - b - c);

    }
    else if(operation == '*'){
        long long a;
        printf("a : ");
        scanf("%d",&a);
        long long b;
        printf("b : ");
        scanf("%d",&b);
        long long c;
        printf("c : ");
        scanf("%d",&c);
        printf("a * b : %11d\n",a * b);
        printf("a * b * c : %11d\n",a * b * c);
    }
    else if(operation == '/'){
        double a;
        printf("a : ");
        scanf("%lf",&a);
        double b;
        printf("b : ");
        scanf("%lf",&b);
        double c;
        printf("c : ");
        scanf("%lf",&c);
        printf("a / b : %.11lf\n",a / b);
        printf("a / b / c : %.11lf\n",a / b / c);
    }
    else{
        return 0;
    }
    return 0;

}
