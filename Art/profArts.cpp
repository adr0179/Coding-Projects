#include "type.cpp"

class Song : public ProformaceArt {
    private:
        string writer;
    public:
        Song(string a, string t, int y, string ty, double d, string w) : ProformaceArt(a, t, y, ty, d) {writer = w;}
        Song() {}
};

class Album : public ProformaceArt {
    private:
        int numOfSongs;
        vector<Song> record;
    public:
        Album(string a, string t, int y, string ty, double d, int nos) : ProformaceArt(a, t, y, ty, d) {
            numOfSongs = nos;
        }
        void listenToAlbum() {
            cout << "Here is " << title << " by " << artist << " (" << duration << " min)" << endl;
            for (Song s : record) { 
                cout << "Listening to " << s.getTitle() << " by " << s.getArtist() << " (" << s.getDuration() << " min)" << endl;
            }
        }
        void addTrack(Song s) {record.push_back(s);}
        friend void playSingleTrack(vector<Album> al);
};

void playSingleTrack(vector<Album> al) {
    string albumChoice;
    cout << "Which album would you like to play?" << endl;
    getline(cin, albumChoice);
    for (Album a : al) {
        if (a.getTitle() == albumChoice) {
            cout << "Album found" << endl;
            string songChoice;
            cout << "Which song would you like to play?" << endl;
            getline(cin, songChoice);
            for (Song s : a.record) {
                if (s.getTitle() == songChoice) {
                    cout << "Playing " << s.getTitle() << " by " << s.getArtist() << " (" << s.getDuration() << " min)" << endl;
                } 
            }
        }
    }
}