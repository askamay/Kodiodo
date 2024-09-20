#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cout << "Enter a String: ";
    getline(cin , s);
    int  vowelCount = 0;
    int constantsCount = 0;
    
    for(int i =0; i < s.length(); i++){
        if(s == 'a' || s == 'e' s == 'i' s == 'o' s == 'u' s == 'A' || s == E' s == 'I' s == 'O' s == 'U'){
            vowelCount++;
            }
        }
             
              constantsCount = (s.length() - 1) - vowelCount;
              
              cout << "Count of vowels are " << vowelCount << endl;
              cout << "Count of constants are " << constantsCount << endl;
              
              return 0;
    
}
