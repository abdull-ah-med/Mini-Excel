#include <iostream>
#include <queue>
#include <stack>

using namespace std;

/*class LinkedList
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
				Node(Node* up, Node* down)
				{
						this->data = "";
						right = nullptr;
						left = nullptr;
						this->up = up;
						this->down = down;
				}
				Node(Node* up, Node* down, Node* right, Node* left)
				{
						this->data = "";
						this->right = right;
						this->left = left;
						this->up = up;
						this->down = down;
				}
		};
};*/
class MiniExcel
{
		class Cell
		{
				string data;
				Cell* right;
				Cell* left;
				Cell* up;
				Cell* down;
				Cell()
				{
						data = "";
						right = nullptr;
						left = nullptr;
						up = nullptr;
						down = nullptr;
				}
				Cell(Cell* right)
				{
						this->data = "";
						this->right = right;
						left = nullptr;
						up = nullptr;
						down = nullptr;
				}
				Cell(Cell* up)
				{
						this->data = "";
						right = nullptr;
						left = nullptr;
						this->up = up;
						down = nullptr;
				}
				Cell(Cell* up, Cell* down)
				{
						this->data = "";
						right = nullptr;
						left = nullptr;
						this->up = up;
						this->down = down;
				}
				Cell(Cell* up, Cell* down, Cell* right, Cell* left)
				{
						this->data = "";
						this->right = right;
						this->left = left;
						this->up = up;
						this->down = down;
				}
				Cell(string data, Cell* up, Cell* down, Cell* right, Cell* left)
				{
						this->data = data;
						this->right = right;
						this->left = left;
						this->up = up;
						this->down = down;
				}
		};
};