//#include <bits/c++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


//new-delete 
int dynamic1(){
    int* subject = new int;
    *subject=10;
    cout<<*subject<<endl;
    cout<<subject<<endl;
    delete subject;
    cout<<*subject<<endl;//garbage value
    cout<<subject<<endl;//memory block still the same
return *subject;
    
}

//new-nullptr
int dynamic2(){
    int* subject = new int;
    *subject=10;
    cout<<*subject<<endl;
    cout<<subject<<endl;
    subject=nullptr;//good practice
    //cout<<*subject;//segmantation fault
    //cout<<subject;//0 value 
return 0;
    
}

//int array
//'add another' type of dynamic3()
int* dynamic3(){
    int size;
    cout<<"Size of array: \n";
    cin>>size;
    int* subject = new int[size] ;
    
    for(int i=0;i<size;i++){
        cout<<"Element "<<i+1<<":"<<endl;
        cin>>subject[i];

    }
    
    for(int i=0;i<size;i++){
        cout<<subject[i]<<" ";
        
    }
return subject;
}

//int array function using <vector> (--not user input yet--)
int dynamic4(){
    
    std::vector<int> number;
    int temp,choice,i=1;
    
    do{
        cout<<"Element "<<i<<": ";
        cin>>temp;
        number.push_back(temp);
        cout<<"Add another?\n[0 = No]\n[1 = Yes]\nChoice : ";
        cin>>choice;
        i++;
    }while(choice==1);
    
    int size=number.size();
    cout<<"Size : "<<number.size()<<endl;
    for(int i=0;i<size;i++){
       cout<<number[i]<<endl;
    }
return 0;    
}

//string array function(--user input--)
 int dynamic5(){
    vector<string> subject;
    int choice;
    cout<<"--Add Subject--\n";
    do{
        string sub;
        cout<<"Name of subject : ";
        cin>>sub;
        subject.push_back(sub);
//if score can be asked here
        cout<<"Want to add another subject??\n";
        
//input validation here please
        cin>>choice;
        
    }while(choice==1);
    int size=subject.size();
    
    cout<<"Listed Subjects :\n";
    for(int i=0;i<size;i++){
        cout<<subject[i]<<endl;
        
    }
return 0;     
 }
 
//planning to integrate struct data type  
 
 
int main(){
    //Caution: one at a time 
    //dynamic1();
    //dynamic2();
    //dynamic3();
    //dynamic4();
    //dynamic5();

    return  0;
}
