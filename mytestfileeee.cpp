
#include "avlbst.h"

#include <utility>

int main() {
  AVLTree<uint16_t, uint16_t> testTree;

  testTree.insert(std::make_pair(1, 9));
	testTree.insert(std::make_pair(2, 8));
}
