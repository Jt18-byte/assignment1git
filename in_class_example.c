#include <stdio.h>

// Objective: go of different if statements in C

// This is Task 1
void ifstatement() {
    int moneySpentOnLegos = 100;

    // base condition
    if (moneySpentOnLegos > 100) {
        printf("You spent more than 100$ on Legos\n");
    } else if (moneySpentOnLegos < 100) {
        printf("You spent less than 100$ on Legos\n");
    }else{
        printf("You spent exactly $100 on Legos\n");
    }
}
//Task 2   
int conditionalsWithMultiOperators() {
    int weekly_income = 300;
    int moneySpentOnLegos = 100;
    int moneySpentOnFood = 50;
    int moneySpentOnRent = 1000;

     // base condition 
    if (weekly_income - moneySpentOnRent < 0) {
        printf("You have no money. you are broke. do better\n");
    }else if (weekly_income - moneySpentOnRent - moneySpentOnLegos < 0) {
        printf("You have no money to feed yourself. Go eat some water soup like the broke college student you are.\n");
    }else if (weekly_income - moneySpentOnRent - moneySpentOnFood - moneySpentOnLegos < 0) {
        printf("Oh come on, you have no money to spend on legos. You barely had enough to spend on rent and food\n");
    } else {
        printf("Wow you have money. don't spend it all at once.\n");
    }

    return 0;

}

int main(int argc, char** argv){
    // argc is the number of arguments passed in 
    // argv is the array of arguments passed in 

    // task 1: create a function that covers if statement
    //  ifstatement(); thats for the first function

    // task 2: create a function with multiple conditionals and math inside
    conditionalsWithMultiOperators();
    
    // task 3: change the value of a variable with an if statement
    int x = 10;
    int booleansignificance = 0;
    if (x == 10)
        booleansignificance = 1;

    printf("The value of booleansignificance is: %d\n", booleansignificance);

    // Task 4: Switch case
        // windows = 1
        // mac = 2
        // Linux = 3
    int operatingSystem = 1;
    switch(operatingSystem){
        case 1:
            printf("You are using windows\n");
            break;
        case 2:
            // Fall through
            break;
        case 3:
            printf("You are using Linux\n");
            break;
        default:
            printf("You are using an unknown operating system\n");
    }
    return 0;
}