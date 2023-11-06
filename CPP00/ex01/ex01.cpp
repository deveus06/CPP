#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    Contact() {}

    void fillContact()
    {
        check_input(first_name, "First Name: ");
        check_input(last_name, "Last Name: ");
        check_input(nickname, "Nickname: ");
        check_input(phone_number, "Phone number: ");
        check_input(darkest_secret, "Darkest secret: ");
    }

    void check_input(std::string &str, std::string label)
    {
        std::string tmp;

        std::cout << label;
        std::getline(std::cin, tmp);
        if (tmp.empty() == 1)
        {
            std::cout << "Field cant be empty" << std::endl;
            check_input(str, label);
            return;
        }
        str = tmp;
    }

    void displayContact() const
    {
        std::cout << "First name: " << first_name << std::endl
                  << "Last name: " << last_name << std::endl
                  << "Nickname: " << nickname << std::endl
                  << "Phone number: " << phone_number << std::endl
                  << "Darkest secret: " << darkest_secret << std::endl;
    }
};

class PhoneBook
{
private:
    Contact contacts[8];
    int next_index;

public:
    PhoneBook() : next_index(0) {}

    void addContact()
    {
        if (next_index >= 8)
        {
            next_index = 0;
        }
        contacts[next_index].fillContact();
        next_index++;
    }

    void searchContacts() const
    {
        for (int i = 0; i < next_index; i++)
        {
            std::cout << std::setw(10) << i << "|"
                      << std::setw(10) << truncate(contacts[i].first_name) << "|"
                      << std::setw(10) << truncate(contacts[i].last_name) << "|"
                      << std::setw(10) << truncate(contacts[i].nickname) << std::endl;
        }
    }

    void displayContactDetails(int index) const
    {
        if (index >= 0 && index < next_index)
        {
            contacts[index].displayContact();
        }
        else
        {
            std::cout << "Invalid index." << std::endl;
        }
    }

private:
    static std::string truncate(const std::string &text)
    {
        if (text.length() > 10)
        {
            return text.substr(0, 9) + ".";
        }
        else
        {
            return text;
        }
    }
};

char toLower(char c)
{
    return static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
}

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        std::transform(command.begin(), command.end(), command.begin(), toLower);

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
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
