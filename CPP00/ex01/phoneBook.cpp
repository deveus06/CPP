#include "phoneBook.hpp"
#include <iostream>
#include <string>

std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}
std::string PhoneBook::truncate(const std::string &text)
{
    std::string str_copy;
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    else if (text.length() < 10)
        return add_spaces(10 - text.length()) + text;
    return text;
}
void PhoneBook::addContact()
{
    if (next_index >= 8)
    {
        next_index = 0;
    }
    contacts[next_index].fillContact();
    next_index++;
}

void PhoneBook::searchContacts() const
{
    for (int i = 0; i < 8; i++)
    {
        std::cout << i << "|"
                    << truncate(contacts[i].first_name) << "|"
                    << truncate(contacts[i].last_name) << "|"
                    << truncate(contacts[i].nickname) << "|"<< std::endl;
    }
 }

void PhoneBook::displayContactDetails(int index) const
{
    if (index >= 0 && index < 8)
    {
        contacts[index].displayContact();
    }
    else
    {
        std::cout << "Invalid index." << std::endl;
    }
}

