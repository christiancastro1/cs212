#include "Node.h"
#include "LinkNode.h"
#include "BTNode.h"
#include "HashBucket.h"
#include <iostream>

int main  (){
	
	BTNode<int >* root = new BTNode<int>(87);

	insert(root,56);
	insert(root,93);
	insert(root,84);
	insert(root,77);
	insert(root,95);
	insert(root,38);
	insert (root,47);

		printpreorder(root);

  return 0;



}
