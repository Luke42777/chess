#pragma once
#include "Figure.h"
class Rook : public Figure{
public:
	Rook () : Figure() {}
	Rook(Position pos, ALLIANCE all) : Figure(pos, all) {}
	virtual Position ShowAvailableMoves()const override;
	virtual void Move() override;

};

