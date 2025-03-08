#include<stdio.h>
int cost_items(int price,int quantity);
int total_bill();
int coffee_qty,tea_qty,sandwich_qty,pastry_qty,coffee_p,tea_p,sandwich_p,pastry_p;
int main(){
    printf("Welcome to coffee shop!\n\nMenu\nCoffee:20Rs\nTea:15Rs\nSandwich:40Rs\nPastry:75Rs\n");
    printf("Enter quantity of coffee:");
    scanf("%d",&coffee_qty);
    printf("Enter quantity of Tea:");
    scanf("%d",&tea_qty);
    printf("Enter quantity of Sandwich:");
    scanf("%d", &sandwich_qty);
    printf("Enter quantity of Pastry:");
    scanf("%d", &pastry_qty);
    coffee_p=cost_items(20,coffee_qty);
    tea_p=cost_items(15, tea_qty);
    sandwich_p=cost_items(40, sandwich_qty);
    pastry_p=cost_items(75, pastry_qty);
    printf("Bill breakdown\n");
    printf("Coffee: %d x 20Rs = %dRs\n",coffee_qty,coffee_p);
    printf("Tea: %d x 15Rs = %dRs\n",tea_qty,tea_p);
    printf("Sandwich: %d x 40Rs = %dRs\n",sandwich_qty,sandwich_p);
    printf("Pastry: %d x 75Rs = %dRs\n",pastry_qty,pastry_p);
    int bill=total_bill();
    printf("Bill: %dRs\n",bill);
    return 0;
}
int cost_items(int price,int quantity){
    return quantity*price;
}
int total_bill(){
    return(coffee_p + tea_p + sandwich_p + pastry_p);
}