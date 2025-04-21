#pragma once 
#include <vector>
#include <string>
#include "User.h"
#include "Property.h"
using namespace std;

class FileManagement {
public:

   static  void saveUsersToFile(vector<User> users, string fileName);

   static void loadUsersFromFile(vector<User>& users, string fileName);


   static void savePropertiesToFile(vector<Property> properties, string fileName);

   static  void loadPropertiesFromFile(vector<Property>& properties, string fileName);
};
