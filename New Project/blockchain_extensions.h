#include "blockchain.h"

// Header file for the thread class
#ifndef _BLOCKCHAIN_E
#define _BLOCKCHAIN_E

class Block
{
	private:
		int id;
		Block* father;
		int depth;
		char* data;
		int dataLength;
		char* hashedData;
		bool hashed;

	public:
		Block(int id, Block* father, char* data, int length);
		Block* getFather();
		int getDepth();
		int getId();
		void setId(int);
		void setDepth(int);
		char* hashData();
		~Block();
};

#endif
