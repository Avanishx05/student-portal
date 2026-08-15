#include "app_features.h"
#include <iostream>

/*
Feature options
-> login, profile, dashboard, settings.
-> each feature has mulitple options.
-> palceholders for current design in place
*/

// Student class is the primary struct to perform all operations.
class Student
{
public:
    std::string username;
    std::string password;
    std::string fullName;
    std::string course;
    int year = 0;
    bool notificationsEnabled = true;

    bool isEmpty() const
    {
        return username.empty();
    }
};

Student currentStudent;
bool profileExists = false;
bool loggedIn = false;

void login()
{
    // TODO: Implement
}

void createProfile()
{
    // TODO: Implement
}

void deleteProfile()
{
    // TODO: Implement
}

void viewProfile()
{
    // TODO: Implement
}

void dashboard()
{
    // TODO: Implement
}

void viewSettings()
{
    if (!profileExists)
    {
        std::cout << "\nNo profile exists. Create one first.\n";
        return;
    }

    std::cout << "\n--- Settings ---\n";
    std::cout << "Notifications: " << (currentStudent.notificationsEnabled ? "ON" : "OFF") << "\n";
}

void updateSettings()
{
    if (!profileExists)
    {
        std::cout << "\nNo profile exists. Create one first.\n";
        return;
    }
    std::cout << "\n--- Update Settings ---\n";

    std::cout << "Toggle notifications (currently "
              << (currentStudent.notificationsEnabled ? "ON" : "OFF") << ")? (y/n): ";
    char choice;
    std::cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        currentStudent.notificationsEnabled = !currentStudent.notificationsEnabled;
        std::cout << "Notifications turned " << (currentStudent.notificationsEnabled ? "ON" : "OFF") << ".\n";
    }
    else
    {
        std::cout << "No changes made.\n";
    }
}