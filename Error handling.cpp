//Uses:
//input validation
//Password validation


//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<a<<endl;//random value if non integer
    
    //infinite loop
    while(true){
        if(cin >> a)
        {
            cout<<"wasnt that hard..\n";
            break;
        }
        else //unnecessary why brada--??
        {
            cout<<"Enter valid input"<<endl;
/// fail state triggered, input buffer still contains "hello\n"
            cin.clear(); //resets this fail flag
            cin.ignore(1000, '\n');//clears the buffer(Leftover)
        }
    }
}
