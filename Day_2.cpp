#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double meal_cost =0.0;
    double tip_percent =0;
    double tax_percent =0;
    double tip =0.0;
    double tax =0.0;
    double total_cost =0.0;
    
    
    cin >> meal_cost >> tip_percent >> tax_percent;
   
    tip = meal_cost * (tip_percent/100);
    tax = meal_cost * (tax_percent/100);
    total_cost = meal_cost + tip + tax;
    //round total_cost to whole number
    cout << "The total meal cost is " << round(total_cost) << " dollars.";
    
    
    
    return 0;
}


