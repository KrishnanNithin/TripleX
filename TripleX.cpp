#include <iostream>

int LevelDifficulty = 1;
const int MaxLevel = 7;

void PrintIntro(){
    // Sets up the start of the game.
    std::cout << "You are a young student working on a cryptography project.";
    std::cout << "\nWhile working on a file, you suddenly discover the plans of a nefarious government organization.";
    std::cout << "\nThese plans are heavily encrypted with multiple codes that you must now attempt to crack.";
    std::cout << "\nAn incorrect answer may be fatal; proceed with caution." << std::endl;
}

void LevelInit(){
    std::cout << "You are now at level " << LevelDifficulty << " of encryption." << std::endl << std::endl;
}

bool PlayGame(){

    LevelInit();

    // Declare variables
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 5;
    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeProduct = CodeA*CodeB*CodeC;

    // Print sum and product of constants above
    std::cout << "There are three digits in each of the encryption keys" << std::endl;
    std::cout << "The digits add up to: " << CodeSum << std::endl;
    std::cout << "The digits multiply to give: " << CodeProduct << std::endl;

    // Store player guesses
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl ;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Verify if guesses were correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        if (LevelDifficulty < MaxLevel){
        std::cout << "Congrats! You have unlocked the next level of encryption" << std::endl << std::endl;
        }
        return true;
    }
    else {
        std::cout << "Alas, you were nearly caught... Proceed with caution." << std::endl << std::endl;
        return false;
    }
}

int main()
{   
    PrintIntro();
    while (LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); //Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "Congrats! You have cracked the code and saved the world.";
    return 0;
}