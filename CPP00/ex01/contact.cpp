#include "contact.hpp"

void Contact::fillContact()
{
    check_input(first_name, "First Name: ");
    check_input(last_name, "Last Name: ");
    check_input(nickname, "Nickname: ");
    check_input(phone_number, "Phone number: ");
    check_input(darkest_secret, "Darkest secret: ");
}

void Contact::check_input(std::string &str, std::string label)
{
    std::string tmp;

    if(std::cin.eof())
    {
        
    }
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
void Contact::displayContact() const
{
    std::cout << "First name: " << first_name << std::endl
                << "Last name: " << last_name << std::endl
                << "Nickname: " << nickname << std::endl
                << "Phone number: " << phone_number << std::endl
                << "Darkest secret: " << darkest_secret << std::endl;
}
