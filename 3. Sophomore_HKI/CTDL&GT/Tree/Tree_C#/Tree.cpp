#include<iostream>
using namespace std;

struct NODE
{
	int data;
	NODE *left, *right;
};

NODE *CreateNode (int x)
{
	NODE *p = new NODE;
	if(p == NULL)
	{
		cout << "khong du bo nho" ;
		return NULL;
	}
	else
	{
		p->data = x;
		p->left = p->right = NULL;
		return p;
	}
}

void InOrder(NODE* root) // duyet trung tu
{
	if (root != NULL)
	{
		InOrder(root->left);
		cout << root->data << " ";
		InOrder(root->right);
	}
}

void PreOrder(NODE* root) // duyet tien tu
{
	if (root != NULL)
	{
		cout << root->data << " ";
		PreOrder(root->left);
		PreOrder(root->right);
	}
}

void PostOrder(NODE* root) // duyet hau tu
{
	if (root != NULL)
	{
		PostOrder(root->left);
		PostOrder(root->right);
		cout << root->data << " ";
	}
}

NODE *SearchOnTree(NODE* root, int p) // tim kiem phan tu
{
	if(root != NULL)
	{
		if(root->data == p)
			return root;
		if(root->data > p)
			return SearchOnTree(root->left,p);
		else
			return SearchOnTree(root->right,p);
	}
	return NULL;
}

NODE* InsertNode(NODE* root, NODE* p) // them phan tu
{
    if (root == NULL)
        return p;
    if (root->data == p->data)
        return 0;
    if (root->data > p->data)
        root->left = InsertNode(root->left, p);
    else
        root->right = InsertNode(root->right, p);
    return root;
}

NODE* MoveLeftMostNode(NODE* root)
{
    while (root->left != NULL)	
        root = root->left;
    return root;     
}

void DeleteNODE(NODE* &root, int p) // xoa phan tu
{
    if (root == NULL)
        return;
    if (root->data > p)
        DeleteNODE(root->left, p);
    else if (root->data < p)
        DeleteNODE(root->right, p);
    else
    {
        NODE *temp = root;
        if(root->left == NULL)
        {
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
		{
            root = root->left;
            delete temp;
        }
        else
		{
        	temp = MoveLeftMostNode(root->right);
            root->data = temp->data;
            DeleteNODE(root->right, temp->data);
        }
    }
}

int main()
{
	NODE* root, * p1, * p2, * p3, * p4, * p5, * p6;
	root = CreateNode(7);
	p1 = CreateNode(5);
	p2 = CreateNode(10);
	p3 = CreateNode(9);
	p4 = CreateNode(2);
	p5 = CreateNode(3);
	p6 = CreateNode(1);
	
	root->left = p1;
	root->right = p2;
	p1->left = p3;
	p2->left = p4;
	p2->right = p5;
	
	cout << "Duyet trung tu: ";
	InOrder(root);
	cout << "\nDuyet tien tu: ";
	PreOrder(root);
	cout << "\nDuyet hau tu: ";
	PostOrder(root);
	
	cout << "\n-------------------------";
	cout << "\nThem phan tu 1 vao cay: ";
	InsertNode(root, p6);
	cout << "\nDuyet trung tu: ";
	InOrder(root);
	cout << "\nDuyet tien tu: ";
	PreOrder(root);
	cout << "\nDuyet hau tu: ";
	PostOrder(root);
	
	cout << "\n-------------------------";
	cout << "\nTim phan tu 5 co trong cay hay khong?";
	if(SearchOnTree(root, 5) == NULL)
		cout << "\n\tkhong tim thay phan tu 5 trong cay";
	else
		cout << "\n\tCo phan tu 5 trong cay";
	
	cout << "\n-------------------------";
	cout << "\nSau khi xoa phan tu 7 khoi cay:";
	DeleteNODE(root, 7);
	cout << "\nDuyet trung tu: ";
	InOrder(root);
	cout << "\nDuyet tien tu: ";
	PreOrder(root);
	cout << "\nDuyet hau tu: ";
	PostOrder(root);
	return 0;
}
