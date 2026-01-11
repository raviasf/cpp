//#include bits/c++.h
#include <iostream>
#include <vector>
#include <string>
#include <iomanip> //setw(n),setfill(char),left/right/internal,setprecision(n)/fixed

using namespace std;


//each subject will have a column in result 
struct column{
    string subject;
    int score;
    int percent;
    char grade;
};

 //for now assuming max_marks=100----------------------------
int percentage(int marks){
    int percent=marks;
    return percent;
}

char grade(int marks){
    if (marks>=95) return 'S';
    else if (marks>=80) return 'A';
    else if (marks>=60) return 'B';
    else if (marks>=40) return 'C';
    else if (marks>=33) return 'D';
    else if (marks>=25) return 'E';
    else return 'F';
}

int main(){
    
    vector<column> scorecard;
    int choice=0;
            
    cout<<"__________________________\n";
    cout<<"Grade chart\n";
    cout<<"__________________________\n";
    
    do{
        column temp;
    
        cout<<"--Add Column--\n";
        cout<<"Subject Title: ";
        cin>>temp.subject;
        cout<<"Marks Obtained: ";
        cin>>temp.score;
        
        temp.percent = percentage(temp.score);
        temp.grade = grade(temp.score);
    
        scorecard.push_back(temp);
    
        cout<<"\nAdd another?\n[0 = No]\n[1 = Yes]\nChoice : ";
        cin>>choice;
    }while(choice);
    
//dont forget printing the result as a table
//added paddings using

    cout<<"\n\n"<<setw(15)<<"SUBJECT"<<setw(10)<<"SCORE"<<setw(10)<<"GRADE"<<endl;

//printing using modern cpp {const auto& item : class}
    for(const auto& item:scorecard){
        cout<<setw(15)<<item.subject<<setw(10)<<item.score<<setw(10)<<item.grade<<endl;
    }
    
    
return 0;
}
