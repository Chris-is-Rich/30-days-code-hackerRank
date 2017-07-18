#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main(){
    //string str = "0001111100";
    int count =0;
    int tmp =0;
    int n;
    cin >> n;
    if( n == 0) count =0;
    string s = bitset<32>(n).to_string();
    //cout << s << endl;
    for(int i=0; i < s.length(); i++){
        if(s[i] == '1'){
            count++;
            //cout << count << endl;
        } else {
           if(count >= tmp){
               tmp = count;
               count =0;
              // cout << "Count" << count << endl;
           }
           count =0;
        }
        if(i == s.length()-1 && count > tmp) { tmp = count;}
    }
    
    cout << tmp << endl; 
    return 0;
}
