# include <stdio.h>

//This function gets added to the top of the stack 
//Then gets removed after its return statement

void helloworld() {
    printf("Hello World\n");
}

void doALoop() {

    // All variables within this loop Does not get added to the stack
    //they get added to the local scope
    for(int i = 0; i < 10; i++) {
        printf("i: %d\n", i);
        char benji = 'b';
        int class_count = 10;

        double runtime = 10.5;
    }
}

int randomFunction() {
    helloworld();
    doALoop();
    return 4;
}


int main(int argc, char** argv) {
    // We have two arguments within main
    // These arguments are typically used for command line purposes
    //argc is the number of arguments
    //argv is the array of arguments

    // random function 
    int x = randomFunction();

    //Example of pointers 
    int a = 10;             // a = 10 But the address of a is 0x42343ff7ac
    int *pointer_to_a = &a;     //pointer_to_a will house the addres of a

   //Have a variable set to the function 
   //Then you can reference it      
    int result = randomFunction();              //Function always return 4 but the memory of the location will always change
    int *pointer_to_random_function = &result;    //pointer to random function will always have the same memory as 'result' address

    //Void does not always work
    //Disclaimer: avoid using void pointers unless usecase specifies it
    void *pointer_to_void = &result;

    //Run 1: address of a was 0x42343ff7ac
    //Run 2: adress of a became 0xfdf71ffcbc
    //this part of static compilation where money is given "randomly" to the variable

    //To get guaranteed locations, you must set the pointer address 
    pointer_to_a = 20;  //Disclaimer: 20 is 0x14 in hexadecimal
    return 0;
}