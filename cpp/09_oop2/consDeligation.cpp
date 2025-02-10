#include <iostream>
#include <vector>

using namespace std;

class Chai
{

public:
    string teaName;
    int servings;
    vector<string> ingre;

    // deligating constructor
    Chai(string name) : Chai(name, 1, {"Water", "tea leaves"}) {}

    // main constructor
    Chai(string name, int serve, vector<string> ingre)
    {
        teaName = name;
        servings = serve;
        ingre = ingre;
        cout << "main constructor called" << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredirents: ";
        // specialized loop for array
        for (string ingre : ingre)
        {
            cout << ingre << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai quickChai("Quick chai");
    quickChai.displayChaiDetails();

    return 0;
}