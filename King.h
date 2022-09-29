#pragma once
#include "Figure.h"
class King :public Figure{
public:
	King():Figure(){}
	King(Position pos,ALLIANCE all) :Figure(pos,all) {}
	virtual Position ShowAvailableMoves()const override;
	virtual void Move() override;

};

