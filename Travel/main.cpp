#include "travel.cpp"

int main() {
    Car c;
    Plane p;
    Hotel h;
    AirBNB a;
    TravelItinerary ti = TravelItinerary("Mexico", "March 25th 2025", false, &c, &a);
    ti.displayItinerary();
    ti.bookStay();
    ti.executeTravel();

    cout << "-------------------------------------------------------------------------------" <<endl;

    ti.switchStay(&h);
    ti.switchTravelMode(&p);

    ti.bookStay();
    ti.executeTravel();

    cout << "-------------------------------------------------------------------------------" <<endl;

    ti.depart();
}