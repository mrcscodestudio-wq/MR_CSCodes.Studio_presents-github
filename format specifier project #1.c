/*
format specifier project(Products Table) only
includes flags: - , space
, 0
*/

#include <stdio.h>

int main(){

    char index[][50] = {
        "id",
        "product_name",
        "category",
        "price",
        "stock_quantity",
        "description",
    };
    char p_name[][50] = {
        "Product#001",
        "Product#002",
        "Product#003",
        "Product#004",
        "Product#005",
        "Product#006",
    };
    char category[][50] = {
        "Books",
        "Electronics",
    };
    char price[][50] = {
        "20.99",
        "44.99",
        "34.99",
        "11.99",
        "29.99",
        "64.99",
    };
    char stock_quantity[][50] = {
        "10", "20", "30", "40",
        "50", "60",
    };
    char description[][50] = {
        "Description for #1",
        "Description for #2",
        "Description for #3",
        "Description for #4",
        "Description for #5",
        "Description for #6",
    };
    printf("%s",index[0]);
    printf("%15s",index[1]);
    printf("%11s",index[2]);
    printf("%11s",index[3]);
    printf("%17s",index[4]);
    printf("%13s\n",index[5]);
    printf("1");
    printf("%15s",p_name[0]);
    printf("%9s",category[0]);
    printf("%14s",price[0]);
    printf("%5s",stock_quantity[0]);
    printf("%32s\n",description[0]);
    printf("2");
    printf("%15s",p_name[1]);
    printf("%15s",category[1]);
    printf("%8s",price[1]);
    printf("%5s",stock_quantity[1]);
    printf("%32s\n",description[1]);
    printf("3");
    printf("%15s",p_name[2]);
    printf("%9s",category[0]);
    printf("%14s",price[2]);
    printf("%5s",stock_quantity[2]);
    printf("%32s\n",description[2]);
    printf("4");
    printf("%15s",p_name[3]);
    printf("%15s",category[1]);
    printf("%8s",price[3]);
    printf("%5s",stock_quantity[3]);
    printf("%32s\n",description[3]);
    printf("5");
    printf("%15s",p_name[4]);
    printf("%15s",category[1]);
    printf("%8s",price[4]);
    printf("%5s",stock_quantity[4]);
    printf("%32s\n",description[4]);
    printf("6");
    printf("%15s",p_name[5]);
    printf("%9s",category[0]);
    printf("%14s",price[5]);
    printf("%5s",stock_quantity[5]);
    printf("%32s\n",description[5]);

    /*
    output
    id   product_name   category      price   stock_quantity  description
    1    Product#001    Books         20.99   10              Description for #1
    2    Product#002    Electronics   44.99   20              Description for #2
    3    Product#003    Books         34.99   30              Description for #3
    4    Product#004    Electronics   11.99   40              Description for #4
    5    Product#005    Electronics   29.99   50              Description for #5
    6    Product#006    Books         64.99   60              Description for #6
    */
    return 0;

}
