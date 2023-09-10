#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist{
    private:
    string song[21];
    int track;

    public:
    MusicPlaylist(){
        track = 1;
    }

    void add(string name){
        song[track] = name;
        track++;
    }

    void setCurrentTrack(int track){
        this->track = track;
    }

    string play(){
        return song[track];
    }

};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(2);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}