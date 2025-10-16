#include "art.cpp"
#include "visualarts.cpp"

class Museum {
    private:
        vector<Art*> pieces;

    public:
        Museum() {}

        void addArt(Art* a) {
            pieces.push_back(a);
        }

        void appericiateArt() {
            for (Art* a : pieces) {
                if (a->getType() == "Proformance Art") {
                    cout << "What a proformance!" << endl;
                } else {
                    cout << "What a beautiful piece of art!" << endl;
                }
            }
        }
};

class Gallary : public Museum {
    private:
        vector<Painting*> paintings;
    public:
        Gallary() {}
};