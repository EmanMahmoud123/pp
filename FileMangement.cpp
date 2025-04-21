#include "FileManagement.h"
#include <fstream>
#include <sstream>
# include <string>
#include <iostream>
using namespace std;

void FileManagement::saveUsersToFile (vector<User> users, string filename) {
	
	ofstream OutStream(filename);
	if (OutStream.fail()) {
		cerr << "could'nt open output file\t maybe permission or wrong path " << endl;
		return;
	}
	else
		for (int  i = 0; i < users.size(); ++i) {
			OutStream << users[i].getUsername() << "|" << users[i].getPassword()  <<endl;
		}
	OutStream.close();
}
void FileManagement::savePropertiesToFile(vector<Property> properties, string filename) {
	ofstream OutStream(filename);
	if (OutStream.fail()) {
		cerr << "could'nt open output file\t maybe permission or wrong path " << endl;
		return;
	}
	else
		for (int i = 0; i < properties.size(); i++) {
			OutStream << properties[i].getId() << "|" << properties[i].getTitle() << "|" << properties[i].getLocation() << "|" << properties[i].getCity() << "|" << properties[i].getPrice() << "|" << properties[i].getBadroom() << "|" << properties[i].getBathroom() << "|" << properties[i].getArea() << "|" << properties[i].getType() << endl;
		}
	OutStream.close();
}
void FileManagement::loadUsersFromFile(vector<User>& users, string filename) {
	ifstream inputStream(filename);
	if (inputStream.fail()) {
		cerr << "Seems file is not there or can't open it." << endl;
		return;
	}
	else {
		string line;
		while (getline(inputStream, line)) {
			if (line.empty()) {
				continue; 
			}

			

			stringstream ss(line);
			string username, password;

			if (getline(ss, username, '|') && getline(ss, password, '|')) {
				User u;
				u.setUsername(username);
				u.setPassword(password);
				users.push_back(u);
			}
			else {
				cerr << "Failed to parse line: " << line << endl;
			}
		}
		inputStream.close();
	}
}
void FileManagement::loadPropertiesFromFile(vector<Property>& properties,string filename) {

	
	ifstream inputStream(filename);
	if (inputStream.fail()) {
		cerr << " Seems file is not there...or can't open it ";
		return;
	}
	else {
		string line;
		while (getline(inputStream, line)) {
			stringstream ss(line);
			string id, title, location, city, price, badroom, bathroom, area, type;
			getline(ss, id, '|');
			getline(ss, title, '|');
			getline(ss, location, '|');
			getline(ss, city, '|');
			getline(ss, price, '|');
			getline(ss, badroom, '|');
			getline(ss, bathroom, '|');
			getline(ss, area, '|');
			getline(ss, type, '|');

			Property p;
			p.setId(stoi(id));
			p.setTitle(title);
			p.setLocation(location);
			p.setCity(city);
			p.setPrice(stod(price));
			p.setBadroom(stoi(badroom));
			p.setBathroom(stoi(bathroom));
			p.setArea(stod(area));
			p.setType(type);

			properties.push_back(p);
		}

		inputStream.close();
	}
		}
		
	

