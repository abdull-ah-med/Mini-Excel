#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class LinkedList
{
		class Node
		{
				string data;
				Node* right;
				Node* left;
				Node* up;
				Node* down;
				Node()
				{
						data = "";
						right = nullptr;
						left = nullptr;
						up = nullptr;
						down = nullptr;
				}
				Node(string data)
				{
						this->data = data;
						right = nullptr;
						left = nullptr;
						up = nullptr;
						down = nullptr;
				}
				Node(Node* right)
				{
						this->data = "";
						this->right = right;
						left = nullptr;
						up = nullptr;
						down = nullptr;
				}
		};
};