#include "Rook.h"

Position Rook::ShowAvailableMoves()const {
	//show available moves for Rook at mPosition
	//let user decide to move 
	//return new position or mPosition(if decided not to move)
	return Position(0, 0);
}

void Rook::Move() {
	Position newPos = ShowAvailableMoves();
	this->mPosition.SetPosition(newPos);
}

