#include<iostream>
#include<vector>
using namespace std;

class Chai {
    public:
        string* teaName;
        int servings;
        vector<string> ingredients; 

        // parameter constructor
        Chai(string name, int serve, vector<string> ingre){
            teaName = new string(name);
            servings = serve;
            ingredients = ingre;

            cout << "Param Constructor Called" << endl;
        }

        // copy constructor
        // deep copy; wants full reference
        Chai(const Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients;
            cout << "Copy Constructor Called" << endl;
        }

        // destructor
        ~Chai(){
           delete teaName;
           cout << "Destructor Called" << endl; 
        }

        void displayChaiDetails(){
            cout << "Tea Name: " << *teaName << endl;
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

    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Tea", "Honey"});
    // lemonTea.displayChaiDetails();

    // copy the object
    Chai copiedChai = lemonTea;
    // copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "Lemon Tea --------" << endl;
    lemonTea.displayChaiDetails();
    cout << "Copied Tea --------" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}