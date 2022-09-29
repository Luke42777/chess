#pragma once
#include "Position.h"


//The vertical lines on the chessboard are called files.The horizontal lines are called ranks.
enum class ALLIANCE { WHITE, BLACK };
class Figure {
	
public:
	Figure() :Figure(Position::sZero,ALLIANCE::WHITE) {}
	Figure(const Position& pos,const ALLIANCE& all):mPosition(pos),mAll(all) {}


	virtual void Move() {}
	virtual Position ShowAvailableMoves()const {
		return Position::sZero;
	}

	int GatRank()const { return mPosition.GetRank(); }
	int GatFile()const { return mPosition.GetFile(); }

protected:
	ALLIANCE mAll;
	Position mPosition;
};


