#pragma once
#include "Figure.h"
#include "Position.h"
class Queen :public Figure{
public:
	Queen() : Figure(){}
	Queen(Position pos,ALLIANCE all): Figure(pos,all) {}
	virtual Position ShowAvailableMoves()const override;
	virtual void Move() override;

};

