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
	for (int i=0;i<size;i++)   //Ȩ�ش�С��������
	{
		int k=i;
		for (int j=i+1;j<=size;j++)
		{
			if (ArrayTree[j].weight<ArrayTree[k].weight && ArrayTree[j].parent==-1) {k=j;}   //�õ���СȨ�ؽڵ���  parent�����жϽڵ��Ƿ��Ѿ��и��ڵ�
			tmp=ArrayTree[k];   //����
			ArrayTree[k]=ArrayTree[i];
			ArrayTree[i]=tmp;
		}
	}
}