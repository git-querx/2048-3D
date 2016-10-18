#ifndef Block_H
#define Block_H

class Block {
	public:
		Block();  // Make new block without vars
		Block(int value, bool merged);  // Make new block
		void editBlock(int value, bool merged);  // Edit block
		void editBlock(int value, bool merged, int alpha);  // Edit block with transparancy
		int getVal();  // Get location ID
		bool getHasMerged();  // Get merged?
		int getTransparancy();
		void setTransparancy(int alpha);
	private:
		int bV;  // Number of Block
		bool bMerged;  // Has it merged during move?
		int bAlpha;  // Transparancy
};

#endif
