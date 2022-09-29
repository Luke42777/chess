#include "King.h"


 Position King::ShowAvailableMoves()const {
//show available moves for King at mPosition
//let user decide to move 
//return new position or mPosition(if decided not to move)
	 return Position(0, 0);
}

void King::Move(){
	 Position newPos = ShowAvailableMoves();
	 this->mPosition.SetPosition(newPos);
 }
