#include<iostream>
using namespace std;

int main () {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);  // use getline if dealing with spaces in between the string 

    // name.length()
        // if(name.length() > 12){
        //     cout << "ur name cant be over 12 chars";
        // } else {
        //     cout << "welcome " << name << " \n";
        //     cout << name.length() << "\n";
        // }


    // name.empty()    
        // if (name.empty()) {
        //     cout << "you didnt enter ur name";
        // } else{
        //     cout << "hello "<< name;
        // }


    // name.clear()


    // name.append()
        // name.append("@gmail.com");
        // cout << "ur email is " << name;
    

    // cout << name.at(0); 
    

    // name.insert(0, "@");
    // cout << name;


    // cout<<name.find(' ');


    // cout << name.erase(0, 3);

    return 0;
}