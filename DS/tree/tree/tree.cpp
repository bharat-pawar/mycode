/**
 * !\file		TreeTest.cpp
 *  \brief		This file contains test program to manipulate tree data structure
 *  \details	File contains logical code snippets for below tree DS manipulations :
 *					 insert
 *  				 traverse (inorder,preorder,postorder)
 *					 searach
 *					 //destroy (commented)
 * 					 count nodes
 *				To be done
 *					Find smallest node
 * 					Find largest node
 *					Find average of tree
 *  \authors	Bharat Pawar
 *  \version	1.0
 *  \date		03/09/2017
  */

#include<iostream>
#include<Windows.h>
#include<time.h>
using namespace std;

enum tree_order
{
	preorder,
	inorder,
	postorder
};

struct node
{
	int data;
	struct node *left;
	struct node *right;
};


/**
 * \fn struct node * insert(struct node *root, int data)
 *
 * \brief This function create new node and inserts it into tree
 *
 * \param [in] root  root node of tree
 * \param [in] data to be inserted in tree
 * \return tree node of root
 *
 * \author Bharat Pawar
 * \date 03/09/2017
**/

struct node * insert(struct node *root, int data)
{
	if(nullptr == root)
	{
		root = (struct node *) malloc(sizeof(root));
		root->left = nullptr;
		root->right = nullptr;
		root->data = data;
	}
	else
	{
		if(data < root->data)
			root->left = insert(root->left, data);
		else
			root->right = insert(root->right, data);
	}

	return root;
}

struct node * find_min(struct node *root)
{
	return nullptr;
}

struct node * find_max(struct node *root)
{
	
	return nullptr;
}

struct node * search(struct node * root, int iElement)
{
	if(nullptr == root)
	{
		return nullptr;
	}
	else
	{
		if(root->data == iElement)
		{
			return root;
		}
		else if(iElement < root->data)
		{
			return search(root->left, iElement);
		}
		else
		{
			return search(root->right, iElement);
		}
	}
}


void traverse(struct node *root, tree_order order)
{
	if(root)
	{	
		switch(order)
		{
			case preorder : 				
				std::cout << root->data <<" ";
				traverse(root->left, preorder);
				traverse(root->right, preorder);
				break;

			case inorder :				
				traverse(root->left, inorder);
				std::cout << root->data <<" ";
				traverse(root->right, inorder);
				break;

			case postorder:
				traverse(root->left, postorder);
				traverse(root->right, postorder);
				std::cout << root->data <<" ";
				break;
		}
	}
}

int countnodes(struct node *root)
{
	static int icount = 0;
	if(root)
	{
		countnodes(root->left);
		countnodes(root->right);
		icount++;
	}

	return icount;
}

//void destroytree(struct node *root)
//{
//	if(root != nullptr)
//	{
//		destroytree(root->left);
//		destroytree(root->right);
//		free(root);
//	}
//}


int main()
{
	int elements[14] = {2, 4, 6, 7, 5, 1, 9, 3, 8, 0, 13, 25, 25, 35};
	struct node * root = nullptr;

	for(int i = 0; i < sizeof(elements)/sizeof(int); i++)
	{
		root = insert(root, elements[i]);
	}

	cout<<"Preorder : ";
	traverse(root, preorder);
	cout<<endl;

	cout<<"Inorder : ";
	traverse(root, inorder);
	cout<<endl;

	cout<<"Postorder :";
	traverse(root, postorder);
	cout<<endl;

	int totalnodes = countnodes(root);

	getchar();
	return 0;
}

