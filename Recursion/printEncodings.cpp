#include <iostream>
#include<string>
using namespace std;

void printEncoding(string ques, string asf){
    // write your code here
    
    if(ques.length()==0){
        cout<<asf<<endl;
        return;
    }else if(ques.length()==1){      //if lenght is 1
        char ch = ques[0];
        if(ch=='0'){
            return;
        }else{
            int chv=ch-'0';
            char code=(char)('a' + chv -1);         // here if chv=6 then code = a+6-1=f because a is 1 not 0
            cout<<asf+code<<endl;
        }
    }else{
        char ch = ques[0];              //if length is 2 or more
        string rest=ques.substr(1);
        
        if(ch=='0'){
            return;
        }else{
            int chv=ch-'0';
            char code=(char)('a' + chv -1);
            printEncoding(rest,asf+code);       //no printing here call lagaya
        }
        
        string ch12=ques.substr(0,2);       //starting 2 char
        string rest12=ques.substr(2);       //rest
        
        int ch12v=std::stoi(ch12);
        if(ch12v<=26){
            char code=(char)('a' + ch12v -1);
            printEncoding(rest12,asf+code);
        }
    }
    
   
    
}

int main(){
    string str;
    cin>>str;
    printEncoding(str,"");
    
}