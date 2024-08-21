#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

class Passenger 
{
    public:
        int bookingId;
        char allotedBerth;
        int seatNumber;

        std::string name;
        int age;
        char berthPreference;

        Passenger (std::string name, int age, char berthPreference);

        void setId(int id);
        int getId();

        void allotBerth(char berth);
        void setSeatNumber (int num);
};

#endif