#include "Property.h"

Property::Property(int _id, const string& _title, const string& _location, const string& _city,
    double _price, int _badroom, int _bathroom, double _area, const string& _type)
    : id(_id), title(_title), location(_location), city(_city), price(_price),
    badroom(_badroom), bathroom(_bathroom), area(_area), type(_type) {
}

void Property::setId(int _id) { id = _id; }
void Property::setTitle(const string& _title) { title = _title; }
void Property::setLocation(const string& _location) { location = _location; }
void Property::setCity(const string& _city) { city = _city; }
void Property::setPrice(double _price) { price = _price; }
void Property::setBadroom(int _badroom) { badroom = _badroom; }
void Property::setBathroom(int _bathroom) { bathroom = _bathroom; }
void Property::setArea(double _area) { area = _area; }
void Property::setType(const string& _type) { type = _type; }

int Property::getId() const { return id; }
string Property::getTitle() const { return title; }
string Property::getLocation() const { return location; }
string Property::getCity() const { return city; }
double Property::getPrice() const { return price; }
int Property::getBadroom() const { return badroom; }
int Property::getBathroom() const { return bathroom; }
double Property::getArea() const { return area; }
string Property::getType() const { return type; }
