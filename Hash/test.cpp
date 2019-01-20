#include "Node.h"
#include "LinkNode.h"
#include "BTNode.h"
#include "HashBucket.h"
#include <iostream>
#include <vector>
int main  (){
	
	BTNode<int >* root = new BTNode<int>(87);
	std::vector<int> array;

	insert(root,56);
	insert(root,93);
	insert(root,84);
	insert(root,77);
	insert(root,95);
	insert(root,38);
	insert (root,47);

	printinorder(root,array);

	for (size_t i = 0; i < 8 ; i++) {
		std::cout << array[i] << " ";
	   	}
  return 0;



}
