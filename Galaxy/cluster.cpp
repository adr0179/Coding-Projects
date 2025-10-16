#include "galaxy.cpp"

class Cluster {
    public:
        string name;
        Cluster(string n): name(n) {galaxies = new Galaxy[1000];}

        Galaxy& operator[] (int index) {
            return galaxies[index];
        }

        vector<Star*> operator() (int index) {
            return galaxies[index].stars;
        }

    private:
        Galaxy* galaxies;
};