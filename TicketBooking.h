#ifndef TICKETBOOKING_H
#define TICKETBOOKING_H
#include "Passenger.h"

#include <vector>
#include <queue>

using namespace std;

class TicketBooking 
{
    public:
        int seatLimit = 2;
        int racLimit = 1;
        int waitingLimit = 2;

        int upperSeatNumber = 3;
        int middleSeatNumber = 2;
        int lowerSeatNumber = 1;

        vector<Passenger> upperSeatList;

        //rac and waiting queue
        queue<Passenger> racQueue;
        queue<Passenger> waitingQueue;

        /* 
            book tickets if confirmed list is less than limit 
                check berth preference availability if confirm list not full
            if confirmed list is full check at rac and waiting and update accordingly
        */
        void bookTickets (Passenger p);

        bool checkAvailability(Passenger p);

        //update rac queue if limit is reached
        bool updateRacQueue (Passenger p);
        
        //update waiting queue if limit is reached
        bool updateWaitingQueue (Passenger p);
};

#endif