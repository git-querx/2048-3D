#include "Block.h"

Block::Block() {
	bV = 0;
	bMerged = false;
	bAlpha = 0;
}

Block::Block(int value, bool merged) {
	editBlock(value, merged);
}

void Block::editBlock(int value, bool merged) {
	bV = value;
	bMerged = merged;
}

void Block::editBlock(int value, bool merged, int alpha) {
	editBlock(value, merged);
	setTransparancy(alpha);
}

int Block::getVal() { return bV; }
bool Block::getHasMerged() { return bMerged; }
int Block::getTransparancy() { return bAlpha; }

void Block::setTransparancy(int alpha) {
	bAlpha = alpha;
}
