#include "Knight.h"

Position Knight::ShowAvailableMoves()const {
	//show available moves for Bishop at mPosition
	//let user decide to move 
	//return new position or mPosition(if decided not to move)
	return Position(0, 0);
}

void Knight::Move() {
	Position newPos = ShowAvailableMoves();
	this->mPosition.SetPosition(newPos);
}
