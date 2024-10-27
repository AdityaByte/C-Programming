#include<stdio.h> 
// This line indicates the header file that is used in the program.
// stdio.h is a header file that contains the standard input/output functions in C.
// .h indicates the header file.
// # means preprocessor directive means the preprocessor copies the preprocessed code of stdio.h to our file.

// By default the return type of the main function is integer.
// int main() is the entry point of the program.
// The return value tells the status of the execution of the program. The main() function return 0 if the program is executed successfully. Otherwise it will return a non-zero value.
// Using void main() is considered incorrect in c or c++ if you use void main then sometimes it cause issues and throws garbage values in output.

int main(){
  // Here this is the body of the main function.
  printf("hello Aditya"); // This is the statement which gives instruction to the compiler to print the output.
  return 0; // After successful execution it will return 0.
}

/* 
// We can also write the above code in the following way.
// Main() function has the default return type to int.
main(){
return 0;
}

// Some compiler also support void return type in main function but its not the standard way of writing the code.
*/


