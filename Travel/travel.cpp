#include<string>
#include<iostream>
#include "stay&mode.cpp"
using namespace std;

class TravelItinerary {
    private:
        string destination;
        string startDate;
        bool tripCompleted;
        TravelMode* tptr = nullptr;
        Accomodation* aptr = nullptr;
    public:
        TravelItinerary(string d, string sd, bool tc, TravelMode* tp, Accomodation* ap) : destination(d), startDate(sd), tripCompleted(tc), tptr(tp), aptr(ap) {}
        void displayItinerary() {
            cout << "destination: " << destination << endl;
            cout << "Start Date: " << startDate << endl;
            cout << "Trip Completed?: " << (!tripCompleted ? "No" : "Yes") << endl;
        }
        void executeTravel() {this->tptr->travel();}
        void bookStay() {this->aptr->stay();}
        void switchTravelMode(TravelMode* tm) {this->tptr = tm;}
        void switchStay(Accomodation* a) {this->aptr = a;}
        void depart() {
            cout << "Trip to " << destination << " has started, you will be ";
            executeTravel();
            cout << "Once you have arrived you will be ";
            bookStay();
            cout << "trip has " << (!tripCompleted ? "not been completed" : "been completed") << endl; 
        }
};