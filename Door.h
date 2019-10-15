//
// Created by Elif Yurt on 15.10.2019.
//

#include "Mapsite.h"
#include "Room.h"

class Door : public Mapsite {
public:
    Door(Room* = 0,  Room* = 0);

    virtual void Enter();
    Room* OtherSideFrom(Room*);

private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};