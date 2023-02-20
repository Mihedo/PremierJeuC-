#include <iostream>
#include <cstdlib>
#include <ctime>

void gameasy()
{
    // Initialise le générateur de nombres aléatoires avec une graine différente à chaque exécution
    std::srand(std::time(nullptr));

    int number = std::rand() % 10 + 1;
    int guess = 0;

    while (guess != number)
    {
        std::cout << "Entrez votre estimation :" << std::flush;
        std::cin >> guess;

        if (guess < number)
        {
            std::cout << "Plus haut !" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Plus bas !" << std::endl;
        }
        else
        {
            std::cout << "Bravo vous avez gagne le nombre a trouver etait bien " << number << std::endl;
        }
    }
}

void gamenormal()
{
    // Initialise le générateur de nombres aléatoires avec une graine différente à chaque exécution
    std::srand(std::time(nullptr));

    int number = std::rand() % 100 + 1;
    int guess = 0;

    while (guess != number)
    {
        std::cout << "Entrez votre estimation :" << std::flush;
        std::cin >> guess;

        if (guess < number)
        {
            std::cout << "Plus haut !" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Plus bas !" << std::endl;
        }
        else
        {
            std::cout << "Bravo vous avez gagne le nombre a trouver etait bien " << number << std::endl;
        }
    }
}

void gamehard()
{
    // Initialise le générateur de nombres aléatoires avec une graine différente à chaque exécution
    std::srand(std::time(nullptr));

    int number = std::rand() % 1000 + 1;
    int guess = 0;

    while (guess != number)
    {
        std::cout << "Entrez votre estimation :" << std::flush;
        std::cin >> guess;

        if (guess < number)
        {
            std::cout << "Plus haut !" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Plus bas !" << std::endl;
        }
        else
        {
            std::cout << "Bravo vous avez gagne le nombre a trouver etait bien " << number << std::endl;
        }
    }
}

void gamextreme()

{
    // Initialise le générateur de nombres aléatoires avec une graine différente à chaque exécution
    std::srand(std::time(nullptr));

    int number = std::rand() % 10000 + 1;
    int guess = 0;

    while (guess != number)
    {
        std::cout << "Entrez votre estimation :" << std::flush;
        std::cin >> guess;

        if (guess < number)
        {
            std::cout << "Plus haut !" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Plus bas !" << std::endl;
        }
        else
        {
            std::cout << "Bravo vous avez gagne le nombre a trouver etait bien " << number << std::endl;
        }
    }
}

void game()
{
    int choice = 0;
    std::cout << "Veuiller choisir un Mode De Jeu !" << std::endl;

    std::cout << "1. Mode Facile" << std::endl;
    std::cout << "2. Mode Normal" << std::endl;
    std::cout << "3.Mode Difficile" << std::endl;
    std::cout << "4. Mode Extreme" << std::endl;
    std::cout << "Entrer le numero correspondant au mode :" << std::flush;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "Ok vous avez choisis le mode facile a vous de jouer :" << std::endl;
        gameasy();
    case 2:
        std::cout << "Ok vous avez choisis le mode Normal a vous de jouer :" << std::endl;
        gamenormal();
    case 3:
        std::cout << "Ok vous avez choisis le mode Difficile a vous de jouer :" << std::endl;
        gamehard();
    case 4:
        std::cout << "Ok vous avez choisis le mode EXTREME !!! a vous de jouer :" << std::endl;
        gamextreme();
    default:
        std::cout << "Avez vous fait un voyage dans le temps ? Car pour l'instant nous possedon pas ce mode" << std::endl;
    }
    
}
