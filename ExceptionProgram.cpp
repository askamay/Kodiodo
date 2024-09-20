#include<iostream>
using namespace std;

int main(){
    
    int marks;
    cout << "Enter marks";
    cin >> marks;
    
    try{
          if(marks >= 0 && marks <= 100){
        cout << "You got: " << marks << " Marks";
    }
        }
  
    else{
        catch(InvalidMarksException){
            cout <<  InvalidMarksException;
            }
        }
    
    return 0;  
}
