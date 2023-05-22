#include <iostream>
#include"BSTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<vector>
#include<list>
using namespace std;



int main()
{


	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(rand()%100);
	}

	srand(time(0));
	BSTree<int> BST;
	BST.Insert(7);
	BST.Insert(5);
	BST.Insert(6);
	BST.Insert(3);
	BST.Insert(2);
	BST.Insert(10);
	BST.Insert(9);
	BST.Insert(11);
	BST.Insert(8);
	BST.Insert(1);


	BSTree<int> BST2;
	BST2.Insert(73);
	BST2.Insert(41);
	BST2.Insert(52);
	BST2.Insert(43);
	BST2.Insert(32);
	BST2.Insert(110);
	BST2.Insert(29);
	BST2.Insert(11);

	BST.OutputTree();
	cout << endl << endl;

	cout << BST.Internal_Node_Count_With1branch();




	return 0;
}

