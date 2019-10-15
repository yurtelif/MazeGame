//
// Created by Elif Yurt on 15.10.2019.
//

#include "Mapsite.h"
#include "Direction.h"

class Room : public Mapsite {
public:
    Room(int roomNo);

    Mapsite* GetSide(Direction) const;
    void SetSide(Direction, Mapsite*);

    virtual void Enter();

private:
    Mapsite* _sides[4];
    int _roomNumber;
};