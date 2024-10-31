#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>

using namespace std;

namespace GameNamespace
{
    struct Game
    {
        int players;
        int round;
        int turn; // from which players is the current turn
    };

    struct Player
    {
        string name;
    };

    struct Boat
    {
        unsigned int size;
    };

    class Map
    {
    private:
        unsigned int x_axis_size;
        unsigned int y_axis_size;

    public:
        Map(unsigned int x_size, unsigned int y_size)
        {
            x_axis_size = x_size;
            y_axis_size = y_size;
        }

        ~Map()
        {
            cout << "BOOM!\n";
            cout << "The world have been destroyed!\n";
            cout << endl;
        }

        void renderMap()
        {
            cout << "Rendering map..." << endl;
        };
    };

}

#endif
