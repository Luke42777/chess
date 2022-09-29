#pragma once
#include "Figure.h"
class Knight :public Figure{
public:
	Knight() : Figure() {}
	Knight(Position pos, ALLIANCE all) : Figure(pos, all) {}
	virtual Position ShowAvailableMoves()const override;
	virtual void Move() override;
};

