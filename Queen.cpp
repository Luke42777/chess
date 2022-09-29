#include "Queen.h"


Position Queen::ShowAvailableMoves()const {
	//show available moves for Queen at mPosition
	//let user decide to move 
	//return new position or mPosition(if decided not to move)
	return Position(0, 0);
}

void Queen::Move() {
	Position newPos = ShowAvailableMoves();
	this->mPosition.SetPosition(newPos);
}

