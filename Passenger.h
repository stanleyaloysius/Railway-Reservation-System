#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

class Passenger 
{
    public:
        int idProvider = 0;
        int bookingId;
        char allotedBerth;
        int seatNumber;
        std::string ticketType;

        std::string name;
        int age;
        char berthPreference;

        Passenger (std::string name, int age, char berthPreference);

        void setId(int id);
        int getId();

        void allotBerth(char berth);
        void setSeatNumber (int num);
        void setTicketType(std::string type);

        std::string passenger_details();
};

#endif