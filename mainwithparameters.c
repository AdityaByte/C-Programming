// In C, the parameters (int argc, char *argv[]) in the main function are used to handle command-line arguments.

#include<stdio.h>

/*
int argc - This is the argument count. 
It is the number of command-line arguments passed to the program including the program name itself.
so if we run the program with no arguments the value of argc is 1 each new argument increases the value of argc by 1.

char* argv[] - This is the argument vector(An array of strings). 
Each element of the argv is a string(character pointer) that holds one of the command line arguments. 
The first element argv[0] is the program name and the subsquent elements holds additional arguments.
*/

int main(int argc , char* argv[]){
  printf("Number of arguments -> " , argc , "\n");
  // Here we are defining a for loop for printing the arguments
  for(int i=0; i<argc; i++){
    printf("argument[%d] = " , i , argv[i] , "\n");
  }
  
}

/*
Output:
/.mainwithparameters arg1 arg2 arg3
Number of arguments -> 4
argument[0] = ./mainwithparameters
argument[1] = arg1
argument[2] = arg2
argument[3] = arg3
*/
