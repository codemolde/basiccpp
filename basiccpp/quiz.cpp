#include <iostream>

int main(){
    std::string question[]={
        "Q1. What are the two property that all material possess?",
        "Q2. Which of the following is the correct property of liquid?",
        "Q3. Which one of the following is a state of water at below 0°C?",
        "Q4. Solve for x, 5x=2x-12.",
        "Q5. Solve for y, 8y=3y x 2 +2."
    };
    std::string option[][4]={
        {"a. mass,density","b. volume,density","c. mass,volume", "d. mass,fluidity"},
        {"a. definite shape,not volume","b. can be compressed","c. density is very low","d. have less intermolecular force than solids"},
        {"a. gaseous state","b. liquid state","c. solid state","d. plasma state"},
        {"a. 4","b. -4","c. 5","d. -5"},
        {"a. 4","b. 3","c. 1","d. 2"}
    };
    char answerkey[]={'c','d','c','b','c'};
    int size =sizeof(question)/sizeof(question[0]);
    char guess;
    int score;
    for(int i=0;i < size;i++){
        std::cout << "#######################\n";
        std::cout << question[i] << '\n';
        std::cout << "#######################\n";
        for(int j=0 ;j< sizeof(option[i])/sizeof(option[i][0]);j++){
            std::cout << option[i][j] << '\n';
        }
    
    std::cin >> guess;
    guess=tolower(guess);

    if(guess==answerkey[i]){
        std::cout << "CORRECT\n";
        score++;
    }
    else{
        std::cout << "WROUNG  \n";
        std::cout << "Answer: " << answerkey[i] << '\n';
    }
}
std::cout << "#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n";
std::cout << "#             RESULT             #\n";
std::cout << "#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n";
std::cout << "~CORRECT GUESSES: " << score << '\n';
std::cout << "~NUMBER OF QUESTION: " << size << '\n';
std::cout << "~SCORE: " << (score/(double)size)*100 << "%" << '\n';

    return 0;
}