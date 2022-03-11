#include <iostream>

int main()
{
    // Sets up the start of the game.
    std::cout << "You are a young student working on a cryptography project.";
    std::cout << "\nWhile working on a file, you suddenly discover the plans of a nefarious government organization.";
    std::cout << "\nThese plans are heavily encrypted with multiple codes that you must now attempt to crack.";
    std::cout << "\nAn incorrect answer may be fatal; proceed with caution." << std::endl;

    // Declare integers.
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 5;
    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeProduct = CodeA*CodeB*CodeC;

    // Print sum and product of constants above
    std::cout << "There are three digits in each of the encryption keys" << std::endl;
    std::cout << "The digits add up to: " << CodeSum << std::endl;
    std::cout << "The digits multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl ;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "Congrats! You live to see another day!";
    }
    else {
        std::cout << "Alas, you've been caught...";
    }

    return 0;
}