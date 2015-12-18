#include <iostream>
using namespace std;

#define maxSize 100

struct TreeNode
{
	float weight;
	char letter;
	TreeNode *LeftChild,*RightChild,*parent;
	//int LeftChild,RightChild,parent;
}

class HuffmanTree
{
private:
	TreeNode ArrayTree[maxSize];
	TreeNode ArrayTreeRest[maxSize];
	int size;
public:
	HuffmanTree();
	~HuffmanTree();
	void Sort();   //÷±Ω”—°‘Ò≈≈–Ú
	void CreatHuffmanTree();
	void InsertNode();
	void DeleteNode();
	void Code();
	void Decode();
}