#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)
#include <iostream>
#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
bool allLeavesSameDepth(Node* root, int depth, int& myLeafD) {
    
    // base case: root is empty
    if (root == NULL) {
        return true;
    }

    // recursive step:

    // check if node is leaf
    if ((root -> left == NULL) && (root -> right == NULL)) {
        bool depthMatch = false;
        if (myLeafD == -1) {
            myLeafD = depth;
        }
        if (depth == myLeafD) {
            depthMatch = true;
        }
        return depthMatch;
    }

    // recursive call
    return allLeavesSameDepth(root -> left, depth + 1, myLeafD) && allLeavesSameDepth(root -> right, depth +1, myLeafD);

}

bool equalPaths(Node * root)
{
    // Add your code below
    int myDepth = -1; // init w bad value
    return allLeavesSameDepth(root,0,myDepth);

}

