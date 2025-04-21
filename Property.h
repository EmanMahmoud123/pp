#pragma once
# include<string >
using namespace std;

class Property {
private:
    int id;
    string title;
    string location;
    string city;
    double price;
    int badroom;
    int bathroom;
    double area;
    string type;

public:
    Property() {}
    Property(int _id, const string& _title, const string& _location, const string& _city,
        double _price, int _badroom, int _bathroom, double _area, const string& _type);

    void setId(int _id);
    void setTitle(const string& _title);
    void setLocation(const string& _location);
    void setCity(const string& _city);
    void setPrice(double _price);
    void setBadroom(int _badroom);
    void setBathroom(int _bathroom);
    void setArea(double _area);
    void setType(const string& _type);

    int getId() const;
    string getTitle() const;
    string getLocation() const;
    string getCity() const;
    double getPrice() const;
    int getBadroom() const;
    int getBathroom() const;
    double getArea() const;
    string getType() const;
};
