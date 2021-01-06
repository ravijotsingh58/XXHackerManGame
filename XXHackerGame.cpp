#include<iostream>
#include<ctime>
using namespace std;
void PlayGameDifficulty(int difficulty){
    cout<<"You are secret Agent Breaking into level "<<difficulty<<" server room\n";
    cout<<"Your Super Hacker 2000 temm you the following information\n";
    
    srand(time(NULL)); // create new randome sequence based on time of day
    const int a = rand() % difficulty + difficulty;
    const int b = rand() % difficulty + difficulty;
    const int c = rand() % difficulty + difficulty;

    const int sum = a + b + c;
    const int product = a * b * c;
    cout<<"\n";
    cout<<"There are three numbers in the code\n";
    cout<<"Enter 3 numbers multiply to give "<<product<<"\n";
    cout<<"Enter 3 numbers add up-to "<<sum<<"\n";

    cout<<"\n Enter 3 numbers followed by x\n";

    int answer;
    int trialSum = 0;
    int trialProduct = 1;

    while(cin>>answer){
        trialSum+=answer;
        trialProduct*=answer;
    }
    cout<<std::endl;
     if(trialSum == sum && trialProduct == product){
         cout<<"CONGRATULATIONS, YOU'RE IN. NOW HURRY BEFORE ANYONE FINDS YOU\n";
         cout<<"================================================================\n";
     }else{
         cout<<"Boom, ;-( You have Failed Misearably \n";
     }
     cout<<std::endl;
}

int main(){
    int difficulty = 2;
    int maxdifficulty = 10;

    while(difficulty <= maxdifficulty){
        PlayGameDifficulty(difficulty);
        std::cin.clear(); // clears the failbit
        std::cin.ignore();// discart the buffer
        ++difficulty;
    }

    std::cout<<"WOW - You're Master Hacker \n";
    return 0;
}