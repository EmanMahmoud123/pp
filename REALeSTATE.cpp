#include <iostream>
#include <vector>
#include "User.h"
#include "Property.h"
#include "FileManagement.h"

using namespace std;

int main() {
    // »Ì«‰«  «·„” Œœ„Ì‰
    vector<User> users;
    users.push_back(User("ali", "password123"));
    users.push_back(User("sara", "mypassword"));
    users.push_back(User("mohamed", "mohamedpass"));
    users.push_back(User("lamia", "lamia123"));
    users.push_back(User("ahmed", "ahmed2025"));
    users.push_back(User("hassan", "hassan@123"));
    users.push_back(User("dina", "dina456"));
    users.push_back(User("youssef", "youssef789"));
    users.push_back(User("fatma", "fatma@2025"));
    users.push_back(User("noha", "noha@123"));
    users.push_back(User("khaled", "khaled2025"));
    users.push_back(User("mariam", "mariam789"));
    users.push_back(User("ramy", "ramy456"));
    users.push_back(User("nour", "nourpass"));
    users.push_back(User("omnia", "omnia2025"));
    users.push_back(User("samir", "samir@123"));
    users.push_back(User("salma", "salma2025"));
    users.push_back(User("waleed", "waleed@789"));
    users.push_back(User("ghada", "ghada2025"));
    users.push_back(User("reem", "reem2025"));
    // »Ì«‰«  «·⁄ﬁ«—« 
    vector<Property> properties;
    properties.push_back(Property(1, "Luxury Villa", "Zamalek", "Cairo", 5000000, 5, 4, 350.0, "Villa"));
    properties.push_back(Property(2, "Modern Apartment", "Mohandessin", "Giza", 1500000, 2, 1, 95.5, "Apartment"));
    properties.push_back(Property(3, "Beach House", "North Coast", "Alexandria", 7500000, 4, 3, 400.0, "Villa"));
    properties.push_back(Property(4, "Studio Apartment", "Nasr City", "Cairo", 700000, 1, 1, 55.0, "Apartment"));
    properties.push_back(Property(5, "Penthouse", "New Cairo", "Cairo", 3200000, 3, 2, 180.0, "Penthouse"));
    properties.push_back(Property(6, "Farm House", "Fayoum", "Fayoum", 2000000, 3, 2, 600.0, "Farm"));
    properties.push_back(Property(7, "Office Space", "Downtown", "Cairo", 4500000, 0, 1, 150.0, "Commercial"));
    properties.push_back(Property(8, "Twin House", "6th October", "Giza", 2800000, 4, 3, 270.0, "Villa"));
    properties.push_back(Property(9, "Loft Apartment", "Sheikh Zayed", "Giza", 1800000, 2, 2, 100.0, "Apartment"));
    properties.push_back(Property(10, "Chalet", "Ain Sokhna", "Suez", 2200000, 2, 1, 120.0, "Resort"));
    // Õ›Ÿ «·»Ì«‰«  ›Ì «·„·›« 
    FileManagement::saveUsersToFile(users, "Users.txt");
    FileManagement::savePropertiesToFile(properties, "Properties.txt");

    //  Õ„Ì· «·»Ì«‰«  „‰ «·„·›« 
    vector<User> loadedUsers;
    vector<Property> loadedProperties;
    FileManagement::loadUsersFromFile(loadedUsers, "Users.txt");
    FileManagement::loadPropertiesFromFile(loadedProperties, "Properties.txt");

    // ⁄—÷ «·„” Œœ„Ì‰
    cout << "Loaded Users:\n";
    for (const auto& u : loadedUsers) {
        cout << u.getUsername() << " - " << u.getPassword() << endl;
    }

    // ⁄—÷ «·⁄ﬁ«—« 
    cout << "\nLoaded Properties:\n";
    for (const auto& p : loadedProperties) {
        cout << p.getId() << " - " << p.getTitle() << " - " << p.getLocation()
            << " - " << p.getCity() << " - " << p.getPrice()
            << " - " << p.getBadroom() << " - " << p.getBathroom()
            << " - " << p.getArea() << " - " << p.getType() << endl;
    }

    return 0;
}