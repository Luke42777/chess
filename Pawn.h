#pragma once
#include "Figure.h"
class Pawn :public Figure{
public:
	Pawn() : Figure() {}
	Pawn(Position pos, ALLIANCE all) : Figure(pos, all) {}
	virtual Position ShowAvailableMoves()const override;
	virtual void Move() override;

};

