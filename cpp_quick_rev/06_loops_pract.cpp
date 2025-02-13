#include<iostream>
#include<ctime>
using namespace std;

int main () {

    // Random Number Generator
    // pseudo-random = not truly random (but close)
        // srand(time(NULL));
        // int num1 = (rand() % 6) + 1;
        // int num2 = (rand() % 6) + 1;
        // int num3 = (rand() % 6) + 1;
        // cout << num1 << '\n';
        // cout << num2 << '\n';
        // cout << num3 << '\n';



    // Random Event Generator
        // srand(time(0));
        // int randNum = rand() % 5 + 1;
        // switch (randNum){
        // case 1: cout << "You win a bumper sticker!\n"; 
        //     break;
        // case 2: cout << "You win a t-shirt!\n";
        //     break;
        // case 3: cout << "You win a free lunch!\n";
        //     break;
        // case 4:cout << "You win a gift card!\n";
        //     break;
        // case 5: cout << "You win a concert ticket!\n";
        //     break;
        // }



    // Number Guessing Game    
        // int num;
        // int guess;
        // int tries = 0;
        // srand(time(NULL));
        // num = (rand() % 10) + 1;
        // cout << "**********NUMBER GUESSING GAME**********\n";
        // do {
        //     cout << "Enter a guess between (1-10): ";
        //     cin>>guess;
        //     tries++;
        //     if (guess>num){
        //         cout<<"Too High!\n";
        //     } else if (guess < num) {
        //         cout << "Too low!\n";
        //     } else {
        //         cout << "Correct! # of tries: " << tries << '\n';
        //     }
        //     } while (guess != num);
    
    return 0;
}