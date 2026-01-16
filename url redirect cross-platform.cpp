#include <iostream>
#include <cstdlib>//let use system()
#include <string>//std::string lives there
using namespace std;

//url redicting
void openlink(const char* url){ //const char* = string
    #ifdef _WIN32
        std::string cmd="start " + std::string(url);
    #elif __APPLE__
        string cmd="open " + string(url);//no need of std here too
    #else 
        cmd="xdg-open "+ string(url);
    #endif
        system(cmd.c_str());
}

int main() {
    int upass/*userpass*/,pass=upass*4;
    
    std::cout<<"Hi!!" <<std::endl <<"cpp it is bayby\n";
    std::cout<<"creative" <<'\n'<<"mf"<<endl;
    std::cout<<"using namespace std??\npassword?? :";
    
    cin>>upass;
    cout<<pass<<endl<<upass<<endl;
    
    //encrypt this please
    if(pass==upass)
    {
        cout<<"Your in!!\n"<<"Pass :"<<pass;
        openlink("https://docs.google.com/document/d/1zzs6AVVdb-ZDmiLpPYUBKO2GFGNInO1lUrad3XlTgRk/edit?usp=sharing");
    }
    else cout<<"Hatt be";
return 0;    
}
