#include <iostream>
#include <cctype>
#include <vector>

class Contact{
    public:
    std::string name;
    std::string phone_number;
    Contact(std::string name, std::string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};
class PhoneBook {
private:
    std::vector<Contact*> contacts;

public:
    PhoneBook() {
        contacts.resize(8, nullptr);
    }

    void add_contact(Contact* contact) {
        int oldest_index = 0;
        for (int i = 1; i < 8; i++) {
            if (contacts[i] == nullptr || contacts[i]->name > contacts[oldest_index]->name) {
                oldest_index = i;
            }
        }
        delete contacts[oldest_index];
        contacts[oldest_index] = contact;
    }

    void remove_contact(std::string name) {
        for (int i = 0; i < 8; i++) {
            if (contacts[i] != nullptr && contacts[i]->name == name) {
                delete contacts[i];
                contacts[i] = nullptr;
                return;
            }
        }
    }

    Contact* find_contact(std::string name) {
        for (int i = 0; i < 8; i++) {
            if (contacts[i] != nullptr && contacts[i]->name == name) {
                return contacts[i];
            }
        }
        return nullptr;
    }
};

int main() {
    PhoneBook phoneBook;
    phoneBook.add_contact(new Contact("John Doe", "1234567890"));
    phoneBook.add_contact(new Contact("Jane Doe", "0987654321"));
    
}