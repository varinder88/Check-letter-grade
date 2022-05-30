//
//  main.cpp
//  Hello
//
//  Created by Varinder Toor on 2022-05-10.
//

#include <iostream>
#include<cmath>

using namespace std;

int main() {

    int a;
    int b;
    int c;
    int d;
    float x1;
    float x2;
    cout << "Please enter 'a' Value\n";
    cin>> a;
    cout<<"Please enter 'b'value\n";
    cin>>b;
    cout<< "Please enter 'c' value\n";
    cin>> c;
    if (a==0){
        if (b==0) {
            cout << "bye";
        }else{
            x1 = (-1*c)/b;
            cout << x1 ;
        }
    }else{
        d = b * b - 4 * a * c;
        
    if (d>0) {
        
        x1 = ((-1 * b )+ sqrt(d) )/ (2 * a);
        x2 =((-1 * b) - sqrt(d) )/ (2 * a);
        cout << "First Solution " << x1 << endl;
        cout << "Second Solution" << x2 << endl;
        
    }else if (d == 0){
        x1 = (-2*a)/b;
        cout << "Only one solution: " << x1 << endl;
    }else{
        cout << "No real solution\n";
    }
    }
}



