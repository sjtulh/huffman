#include "HuffmanTree.h"



HuffmanTree::HuffmanTree()
{
	int size=0;
	//int sizeRest=0;
	TreeNode ArrayTree[maxSize]={};
	//TreeNode ArrayTreeRest[maxSize]={};
}

HuffmanTree::~HuffmanTree()
{
	delete[] ArrayTree;
}

void HuffmanTree::CreatHuffmanTree()
{
	
}

void HuffmanTree::Sort()
{
	TreeNode tmp;
	for (int i=0;i<size;i++)   //权重从小到大排序
	{
		int k=i;
		for (int j=i+1;j<=size;j++)
		{
			if (ArrayTree[j].weight<ArrayTree[k].weight && ArrayTree[j].parent==-1) {k=j;}   //得到最小权重节点编号  parent用于判断节点是否已经有父节点
			tmp=ArrayTree[k];   //交换
			ArrayTree[k]=ArrayTree[i];
			ArrayTree[i]=tmp;
		}
	}
}