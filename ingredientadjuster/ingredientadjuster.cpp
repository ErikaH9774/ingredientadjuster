// ingredientadjuster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

namespace std {;

int main()
{
    const int initial_cookie = 48;
    int number_cookie = 0;
    double cups_of_sugar = 1.5;
   double cups_of_butter = 1;
   double cups_of_flower = 2.75;

   cout << "How many cookies would you like to bake? \n"; 
       cin >> number_cookie;

       int cups_need = (cups_of_sugar / number_cookie) + (cups_of_butter / number_cookie) + (cups_of_flower / number_cookie);
       cout << " You will need" << cups_need << " cups of sugar \n";

       double factor_cookies = number_cookie / static_cast<double>(initial_cookie);

       double sugar_need = cups_of_sugar * factor_cookies; 
       double butter_need = cups_of_butter * factor_cookies;
       double flower_need = cups_of_flower * factor_cookies; 

       cout << "You will need: \n;"
       cout << sugar_need << "cups of sugar \n" << ;
       cout << butter_need << "cups of butter \n" << ;
       cout << flower_need << "cups of flower\n" << ;

    return 0;

}