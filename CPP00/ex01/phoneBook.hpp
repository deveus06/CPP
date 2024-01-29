#pragma once
#include "contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int next_index;

public:
    PhoneBook() : next_index(0) {}

    void addContact();
    void searchContacts() const;
    void displayContactDetails(int index) const;
    static std::string truncate(const std::string &text);
};
