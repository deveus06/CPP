#pragma once
#include <iostream>
#include <string>
class Contact
{
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    Contact() {}

    void fillContact();
    void check_input(std::string &str, std::string label);
    void displayContact() const;
};
