// ingredientadjuster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

namespace std {;

int main()
{
   
    int number_cookie = 0;
    double cups_of_sugar = 1.5;
   double cups_of_butter = 1;
   double cups_of_flower = 2.75;

   cout << "How many cookies would you like to bake? \n"; 
       cin >> number_cookie;

       int cups_need = (cups_of_sugar / number_cookie) + (cups_of_butter / number_cookie) + (cups_of_flower / number_cookie);
       cout << " You will need" << cups_need << " cups of sugar \n";


    return 0;

}