#include "Bishop.h"

Position Bishop::ShowAvailableMoves()const {
	//show available moves for Bishop at mPosition
	//let user decide to move 
	//return new position or mPosition(if decided not to move)
	return Position(0, 0);
}

void Bishop::Move() {
	Position newPos = ShowAvailableMoves();
	this->mPosition.SetPosition(newPos);
}

