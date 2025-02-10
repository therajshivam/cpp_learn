#include<iostream>
#include<vector>

using namespace std;

class Chai {
    public:
        string teaName;
        int servings;
        vector<string> ingredients; 

        // parameter constructor
        Chai(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;

            cout << "Param Constructor Called" << endl;
        }

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

    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Tea", "Honey"});

    lemonTea.displayChaiDetails();

    return 0;
}