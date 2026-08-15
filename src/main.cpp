#include "features.h"
#include <iostream>

void profileMenu()
{
    int choice;
    do
    {
        std::cout << "\n--- Profile Menu ---\n";
        std::cout << "1. Create Profile\n";
        std::cout << "2. View Profile\n";
        std::cout << "3. Delete Profile\n";
        std::cout << "0. Back\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            createProfile();
            break;
        case 2:
            viewProfile();
            break;
        case 3:
            deleteProfile();
            break;
        case 0:
            break;
        default:
            std::cout << "Invalid option, try again.\n";
        }
    } while (choice != 0);
}

void settingsMenu()
{
    int choice;
    do
    {
        std::cout << "\n--- Settings Menu ---\n";
        std::cout << "1. View Settings\n";
        std::cout << "2. Update Settings\n";
        std::cout << "0. Back\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            viewSettings();
            break;
        case 2:
            updateSettings();
            break;
        case 0:
            break;
        default:
            std::cout << "Invalid option, try again.\n";
        }
    } while (choice != 0);
}

void showMainMenu()
{
    std::cout << "\n===== Student Portal =====\n";
    std::cout << "1. Login\n";
    std::cout << "2. Profile\n";
    std::cout << "3. Dashboard\n";
    std::cout << "4. Settings\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose an option: ";
}

int main()
{
    int choice;

    do
    {
        showMainMenu();
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            login();
            break;
        case 2:
            profileMenu();
            break;
        case 3:
            dashboard();
            break;
        case 4:
            settingsMenu();
            break;
        case 0:
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid option, try again.\n";
        }
    } while (choice != 0);

    return 0;
}