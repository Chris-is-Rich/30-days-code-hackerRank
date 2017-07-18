#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n);

int main() {
    int num;
    cin >> num;
    cout << factorial(num);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
int factorial(int n){
    int tmp;
    if(n <= 1) return 1;
    
    tmp = n * factorial(n-1);
    return tmp;
}

