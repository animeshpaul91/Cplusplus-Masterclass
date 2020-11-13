// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

using namespace std;

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "E - Play Last Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
    cout << "\nNow Playing: "<<endl;
    cout << song << endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    cout << endl;
    for (const auto &song: playlist)
        cout << song << endl;
    play_current_song(current_song);
}

void flush_input_stream() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}


int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    
    // Your program logic goes here
    char c {};
    string song_name {}, song_artist {};
    int song_rating {};
    
    do {
        display_menu();
        cin >> c;
        c = tolower(c);
        
        switch(c)
        {
            case 'f':
                      cout << "Playing First Song" <<endl;
                      current_song = playlist.begin();
                      play_current_song(*current_song);
                      break;
            case 'e':
                      cout << "Playing Last Song" <<endl;
                      current_song = playlist.end();
                      current_song--;
                      play_current_song(*current_song);
                      break;
            case 'n':
                      cout << "Playing Next Song" <<endl;
                      current_song++;
                      if (current_song == playlist.end())
                          current_song = playlist.begin();                                      
                      play_current_song(*current_song);
                      break;
            case 'p':
                      cout << "Playing Previous Song" <<endl;
                      if (current_song == playlist.begin())
                          current_song = playlist.end();
                      current_song--;
                      play_current_song(*current_song);
                      break;
            case 'a':
                      flush_input_stream();
                      cout << "Adding and Playing new Song" <<endl;
                      cout << "Enter Song name: ";
                      getline(cin, song_name);
                      cout << "Enter Song artist: ";
                      getline(cin, song_artist);
                      cout << "Enter Song rating (1-5): ";
                      cin >> song_rating;
                      playlist.insert(current_song, Song{song_name, song_artist, song_rating});
                      current_song--;
                      play_current_song(*current_song);
                      break;
            case 'l':
                      display_playlist(playlist, *current_song);
                      break;
            case 'q': 
                      cout << "Quitting Application" <<endl;
                      break;
            default:
                    cout << "\n Wrong Choice\n";
        }
        
    } while (c != 'q'); 
    
    cout << endl;
    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}