#include "visualarts.cpp"
#include "profArts.cpp"
#include "museum.cpp"

int main() {
    // paintings
    Painting p = Painting("Leonardo Divinci", "Mona Lisa", 1503, "Visual Art", 30);

    // songs
    Song s = Song("Iron Maiden", "Fear Of The Dark", 1991, "Proformance Art", 7.5, "Bruce Dickinson");
    Song s2 = Song("Iron Maiden", "Afraid To Shoot Strangers", 1991, "Proformance Art", 6.5, "Bruce Dickinson");
    Song s3 = Song("Iron Maiden", "Be Quick Or Be Dead", 1991, "Proformance Art", 3.5, "Bruce Dickinson");
    Song s4 = Song("Megadeth", "Holy Wars", 1990, "Proformance Art", 6.5, "Dave Mustaine");
    Song s5 = Song("Megadeth", "Hangar 18", 1990, "Proformance Art", 6.5, "Dave Mustaine");
    Song s6 = Song("Megadeth", "Tornado Of Souls", 1990, "Proformance Art", 6.5, "Dave Mustaine");

    // albums
    Album a = Album("Iron Maiden", "Fear Of The Dark", 1991, "Proformance Art", 60, 12);
    Album a2 = Album("Megadeth", "Rust In Peace", 1990, "Proformance Art", 40.75, 9);
    p.showCasePaintintg();

    cout << "-------------------------------------------------------------------------------" <<endl;

    a.addTrack(s);
    a.addTrack(s2);
    a.addTrack(s3);
    a2.addTrack(s4);
    a2.addTrack(s5);
    a2.addTrack(s6);
    a.listenToAlbum();
    a2.listenToAlbum();

    cout << "-------------------------------------------------------------------------------" <<endl;
    
    vector<Album> albums;
    albums.push_back(a);
    albums.push_back(a2);
    playSingleTrack(albums);

    cout << "-------------------------------------------------------------------------------" <<endl;

    // later change to work with dynamic array
    Art arr[] = {p, s, s2, s3, s4, s5, s6, a, a2};
    for (int i = 0; i < 9; i++) {
        arr[i].display();
    }

    cout << "-------------------------------------------------------------------------------" <<endl;

    Museum m;

    m.addArt(&s);
    m.addArt(&p);
    m.addArt(&a);
    m.addArt(&s4);

    m.appericiateArt();
}