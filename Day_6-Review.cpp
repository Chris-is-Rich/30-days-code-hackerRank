#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    cin >> num;
    vector <string>words;
    string a;
    for(int i=0; i < num; i++){
        cin >> a;
        words.push_back(a);
    }
    
    int size = words.size();
    int arr[size];
    for(int j=0; j<size; j++) {
        arr[j]=words[j].length();
        
    }
    for(int k=0; k<words.size();k++){
        for(int x=0; x <arr[k]; x++){
            if(x % 2 == 0)
            cout << words[k][x];
        }
        cout << " ";
        for(int b=0; b<arr[k]; b++){
            if(b % 2 == 1)
            cout << words[k][b];
        }
        cout << endl;
    }
    return 0;
}
