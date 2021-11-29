
#include "iostream"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Evan Verdu
 */

//Write a program to test an integer value to determine if it is odd or even.
//As always, make sure your output is clear and complete. In other words,
//don't just output "yes" or "no." Your output should stand alone, like
//"The value 4 is an even number."


int main() {
    
    int x;
    //gathers input.
    std::cout << "Enter a number: ";
    std::cin >> x;     

    //checks if even or odd.
    //prints answer.

    if ( x % 2 == 0){
       std::cout << x << " is an even number.";
    }
    else{
        std::cout << x << " is an odd number.";
    }


    return 0;

}