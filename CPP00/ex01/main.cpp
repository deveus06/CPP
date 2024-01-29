#include "contact.hpp"
#include "phoneBook.hpp"
#include <string>
#include <iostream>

char toLower(char c)
{
    return static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
}
int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (std::cin.good())
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "add")
        {
            phoneBook.addContact();
        }
        else if (command == "search")
        {
            phoneBook.searchContacts();
            std::cout << "Enter the index of the contact to display: ";
            int index;
            if (std::cin >> index)
            {
                std::cin.ignore();
                phoneBook.displayContactDetails(index);
            }
            else
            {
                std::cout << "Invalid input." << std::endl;
                std::cin.clear();
            }
        }
        else if (command == "exit")
        {
            break;
        }
        else
        {
            std::cout << "Unknown command." << std::endl;
        }
    }
    return 0;
}
