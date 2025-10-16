#include "food.cpp"

int main() {
    try {
        FoodItem bagel;
        FoodItem hotChocolate;
    } catch(const OverCookedExeption& e) {
        cerr << "Exception: " << e.what() << endl;
    } catch (const TooSaltyExeption &e) {
        cerr << "Exception: " << e.what() << endl;
    } catch (const ValidDataExpeption &e) {
        cerr << "Exception: " << e.what() << endl;
    }
}