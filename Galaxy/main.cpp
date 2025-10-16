#include "cluster.cpp"

int main(){
    Star star1 = Star(500, 40.4, "sol");
    Star star2 = Star(250, 140.4, "BeetleJuice");

    Star star3 = star1 + star2;
    // star3.display();

    cout << star1.name << " is " << (star1 > star2 ? "" : "not ") << "more massive " << star2.name << endl;
    cout << star1.name << " is " << (star1 < star2 ? "" : "not ") << "less massive " << star2.name << endl;

    cout << "difference in mass between star1 & star2: " << star1 - star2 << endl;

    Star star4 = star1*5;
    // star4.display();
    cout << star1 << star2 << star3 << star4 << endl;

    cout << endl;

    // compareStars(star1, star2);

    Galaxy g1 = Galaxy("Milky Way");
    g1.addStar(&star1);
    g1.addStar(&star2);
    g1.addStar(&star3);
    // g1.displayStars();
    g1[1]->display();

    Galaxy g2 = Galaxy("Andromeda");
    g2.addStar(&star4);
    // g2.displayStars();

    Cluster c = Cluster("Virgo");
    c[0] = g1;
    c[1] = g2;
    // c[0].displayStars();

    // for (Star* s : c(1)) {
    //     cout << *s << endl;
    // }
}