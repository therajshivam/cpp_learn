// vectors are a type of array but better, as it allows faast random access to any elements.
// semicolon after class
// class is like a template which we create and can be used as per our need
// default access of class is private
// we have to declare it as public

#include<iostream>
#include<vector>

using namespace std;

// declaring classes
 class Chai {

    public:
        // data members (attributes)
        string teaName; // name of the tea
        int servings;   // number of servings
        vector<string> ingredients;  // list of ingredients for the tea

        // Member function : method/function defined inside a class
        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredirents: ";
            // specialized loop for array
            for(string ingredient : ingredients ){
                cout<< ingredient << " ";
            }
            cout << endl;
        }
    };



     int main () {

        // making objects of the class
        // class names are denoted with first capital letter.
        // object names are denoted with small letters 
        Chai chaiOne;

        chaiOne.teaName = "lemon tea";
        chaiOne.servings = 2;
        chaiOne.ingredients = {"water", "lemon", "honey", "tea" };
        
        chaiOne.displayChaiDetails();
        


        Chai chaiTwo;

        chaiTwo.teaName = "masala tea";
        chaiTwo.servings = 5;
        chaiTwo.ingredients = {"water", "masala", "sugar", "tea" };

        chaiTwo.displayChaiDetails();

        return 0;
     }

