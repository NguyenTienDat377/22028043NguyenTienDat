#include <iostream>
#include <string>

using namespace std;

//Bai 7 tai day
void printPyramid(int m,int n){
    int space = m;
    for(int i = 0; i < n; i++){
        int k = 1;
        while(k <= space){
            cout << ' ';
            k++;
        }
        space--;
        for(int j = 1; j <= 2*i + 1; j++){
            cout << '*';
        }
        cout << endl;
    }
}

//Bai 4 tai day
const int MAX_GUESS_CHARACTER = 7;

string createSecretWord(){
    return "book";
}

string createBlankWord(string sCharacter, char op){
    int n = sCharacter.size();
    for(int i = 0; i < n; i++){
        sCharacter[i] = op;
    }
    return sCharacter;
}

char makeAGuess(){
    //moi nguoi choi doan chu//
    char guess;
    cout << "Moi ban doan chu cai: \n";
    cin >> guess;
    return guess;
}

int check(char gCharacter, string word, string blankWord){
    int check = 0;
    for(int i = 0; i < word.size(); i++){
        if(word[i] == gCharacter){
            check = 1;
        }
    }
    return check;
}

bool gameOver(int falseGuessCharacter, string blankWord, string secretWord){
    return (falseGuessCharacter == MAX_GUESS_CHARACTER || blankWord == secretWord);
}

void display(string blank, int falseCount){
    cout << "Tu ban doan duoc la: " << blank << endl;
    cout << "Ban con doan duoc: " << MAX_GUESS_CHARACTER - falseCount << " lan\n";
}
void process(char guess, string word, string &blankWord){
    for(int i = 0; i < word.size(); i++){
        if(guess == word[i]){
            blankWord[i] = word[i];
        }
    }
}

void displayResult(int falseGuess, string word, string blankWord){
    if(falseGuess == MAX_GUESS_CHARACTER){
        cout << "Ban da thua cuoc\n";
    }
    else if (word == blankWord){
        cout << "ban da thang cuoc\n";
    }
}


int main(){
    string word = createSecretWord();
    string blankWord = createBlankWord(word,'_');
    int falseGuess = 0;
    do{
        char gChar = makeAGuess();
        if(check(gChar, word, blankWord) == 1){
            process(gChar, word, blankWord);
            display(blankWord, falseGuess);
        }
        else{
            falseGuess++;
            display(blankWord, falseGuess);
        }
    }
    while(!gameOver(falseGuess, blankWord, word));
    displayResult(falseGuess, word, blankWord);
    return 0;
}
