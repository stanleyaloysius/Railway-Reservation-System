#include "Passenger.h"
#include <string>
using namespace std;

Passenger::Passenger(string name, int age, char berthPreference) {
    this->name = name;
    this->age = age;
    this->berthPreference = berthPreference;
}

void Passenger::setId(int id) {
    this->bookingId = id;
}

int Passenger::getId () {
    return bookingId;
}

void Passenger::allotBerth(char berth) {
    this->allotedBerth = berth;
}

void Passenger::setSeatNumber (int num) {
    this->seatNumber = num;
}