#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Chai {
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"water", "tea leaves"};
        }

        Chai(string name, int serve, vector<string> ingr) {
            teaName = name;
            servings = serve;
            ingredients = ingr;  
        }

        // getter
        string getTeaName(){
            return teaName;
        }

        // setter
        void setTeaName(string name){
            // write logic here
            teaName = name;
        }

        // getter for servings
        int getServings(){
            return servings;
        }
        // setter for servings
        void setServings(int serve){
            servings = serve;
        }

        // getter for ingredients
        vector<string> getIngredients(){
            return ingredients;
        }

        // setter for ingredients
        void setIngredients(vector<string> ingr) {
            ingredients = ingr;
        }

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredirents: ";

            for(string ingredient : ingredients ){
                cout<< ingredient << " ";
            }
            cout << endl;

};


};

int main() {

    Chai chai;
    chai.setTeaName("Ginger Tea");

}