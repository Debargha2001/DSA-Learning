#include<iostream>
using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = s1;
    cout<<s1<<" "<<s2<<endl;

    string s;
    cout<<"Enter string: ";
    // input string
    getline(cin, s);
    cout<<"Given string is "<<s<<endl;

    for(int i=0;i<s.length();i++){
        if(s.at(i) == ' '){
            s[i] = '-';
        }
    }
    s.at(20) = 'a';
    cout<<"Modified string is "<<s<<endl;

    string s1 = "abc", s2 = "ABC";
    if(s1 > s2){
        cout<<"s1 is greater"<<endl;
    }else if(s1<s2){
        cout<<"s2 is greater"<<endl;
    }else{
        cout<<"both are equal"<<endl;
    }

    string s1 = "Hello";
    string s2 = "World";
    cout<<"concatenated string: "<<s1+" "+s2<<endl;
}