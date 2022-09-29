#pragma once
class Position
{
public:
	static const Position sZero;
	Position() :Position(0, 0) {}
	Position(int r, int f) :mRank(r), mFile(f) {}



	inline Position GetPosition()const { return Position(mRank, mFile); }
	inline int GetRank()const { return mRank; }
	inline int GetFile()const { return mFile; }

	inline void SetPosition(const Position& pos) { mRank = pos.mRank; mFile = pos.mFile; }
	inline void SetPosition(int r, int f) { mRank = r; mFile = f; }


private:
	int mRank;
	int mFile;

};


