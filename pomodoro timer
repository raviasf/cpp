//#include <bits/stdc++.h>
#include <iostream>
#include <ctime> // for clock() & time(nullptr)
#include <thread> // for sleep_for
#include <chrono> // for milliseconds
using namespace std;

int timer(int x){
    clock_t start = time(nullptr);
//do something
    while(true){
        clock_t now = time(nullptr);
        double elapsed = difftime(now,start); // "/CLOCKS_PER_SEC" if used clock()
        cout<<"Time elapsed :"<<elapsed<<" sec\n";
        
        if(elapsed>=x){
//install alarm
            cout<<"Beep Beep\n";
            elapsed = 0;
            break;
        }
    this_thread::sleep_for(chrono::seconds(1));
    }
return 0;
}


int main(){
    int studyp,recp,choice;
    cout<<"Enter study period(sec)\n";
    cin>>studyp;
    cout<<"Enter recreation period(sec)\n";
    cin>>recp;
    while(true){
        timer(studyp);
        timer(recp);
        cout<<"0 = Quit\n1 = Continue\n";
        cin>>choice;
        if(choice==0) break;//red flag
    }
}
