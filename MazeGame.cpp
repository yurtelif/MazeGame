//
// Created by Elif Yurt on 15.10.2019.
//

#include "Maze.h"
#include "Door.h"
#include "Wall.h"

class MazeGame {
    Maze* CreateMaze() {
        Maze* aMaze = new Maze;
        Room* r1 = new Room(1);
        Room* r2 = new Room(2);
        Door* theDoor = new Door(r1,r2);

        aMaze ->addRoom(r1);
        aMaze ->addRoom(r2);

        r1 ->SetSide(North, new Wall);
        r1 ->SetSide(East, theDoor);
        r1 ->SetSide(South, new Wall);
        r1 ->SetSide(West, new Wall);

        r2 ->SetSide(North, new Wall);
        r2 ->SetSide(East, new Wall);
        r2 ->SetSide(South, new Wall);
        r2 ->SetSide(West, theDoor);
        return aMaze;
    }
};

