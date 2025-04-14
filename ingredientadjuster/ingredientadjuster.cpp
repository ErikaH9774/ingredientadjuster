// ingredientadjuster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program is about ingredient adjuster for baking 48 cookies. 

#include <iostream>

namespace std {;

//int main inside will include the program.
int main()
{
    //adding the variables attached, initial cookie will be 48, number_cookie will be where the input is stored. Cups_of_sugar-value at 1.5. Cups_of_butter-1. Cups_of_flower-2.75
    const int initial_cookie = 48;
    int number_cookie = 0;
    double cups_of_sugar = 1.5;
   double cups_of_butter = 1;
   double cups_of_flower = 2.75;
   //User will see how many cookies would you like to bake 
   cout << "How many cookies would you like to bake? \n"; 
   //number_cookie where the number is stored. 
       cin >> number_cookie;
//The formula for dividing the number of cookie the user enters with the initial cookie and reason for the static_cast<double> is to make the denominator a double rather than a whole number
 double factor_cookies = number_cookie / static_cast<double>(initial_cookie);
 //including sugar needed to calculate cups of sugar times factor cookies and applying it to butter needed, flower needed
 double sugar_need = cups_of_sugar * factor_cookies; 
 double butter_need = cups_of_butter * factor_cookies;
 double flower_need = cups_of_flower * factor_cookies; 
//it will display to the user you will need: (amount of sugar needed) cups of sugar.
 //(amount of butter needed) cups of butter.
 //(amount of flower needed) cups of flower.
       cout << "You will need: \n;"
       cout << sugar_need << "cups of sugar \n" <<;
       cout << butter_need << "cups of butter \n" <<;
       cout << flower_need << "cups of flower\n" <<;

    return 0;

}