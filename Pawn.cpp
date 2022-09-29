#include "Pawn.h"

Position Pawn::ShowAvailableMoves()const {
	//show available moves for Pawn at mPosition
	//let user decide to move 
	//return new position or mPosition(if decided not to move)
	return Position(0, 0);
}

void Pawn::Move() {
	Position newPos = ShowAvailableMoves();
	this->mPosition.SetPosition(newPos);
}

