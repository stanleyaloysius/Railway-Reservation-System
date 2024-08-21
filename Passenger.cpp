#include "Passenger.h"
#include <string>
using namespace std;

Passenger::Passenger(string name, int age, char berthPreference) {
    this->bookingId = idProvider++;
    this->name = name;
    this->age = age;
    this->berthPreference = berthPreference;
}

void Passenger::setId(int id) {
    this->idProvider = id;
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

void Passenger::setTicketType(string type) {
    this->ticketType = type;
}

string Passenger::passenger_details() {
    string details = "Booking ID: " + to_string(bookingId) +" Ticket Type: " + ticketType +
                     "\nPassenger Name: " + name + " Age: " + to_string(age) + " Preferred Berth: " + berthPreference + 
                     "\nAlotted -> Seat number : " + to_string(seatNumber) + " Alloted Berth: " + allotedBerth;

    return details;
}