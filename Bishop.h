#pragma once
#include "Figure.h"
class Bishop : public Figure{
public:
	Bishop() : Figure() {}
	Bishop(Position pos, ALLIANCE all) : Figure(pos, all) {}
	virtual Position ShowAvailableMoves()const override;
	virtual void Move() override;
};

