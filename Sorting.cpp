#include <array>
#include <iostream>



using std::endl;
using std::cout;
using std::cin;
using namespace std;

void insert(int a[], int n) {

	srand((unsigned)time(NULL));
	for (int i = 1; i <= n; i++) {
		int ran = 1 + (rand() % 100);
	 }


	cout << "lowest to higest \n";
	for (int i = 0; i < n; i++) {
		int pop = i;


		for (int j = i + 1; j < n; j++) {

			//from lower to higher number " < ".
			if (a[j] < a[pop]) {
				pop = j;
			}
		}
		int hold = a[i];
		a[i] = a[pop];
		a[pop] = hold;

		
		cout << a[i] << " ";
		
	}
	cout << " \n";
}


/// <summary>
// Link list 
/// </summary>

// Make a node.
struct Node {
	int data;				//hold the integer value.
	struct Node *next;		//	A node pointer
};

//display values in the node.
void print_list(Node* n) {
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

int main() {

	//creating the *link list*
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	//putting data value and pointer in to each node.
	head-> data = 1;
	head-> next = second;

	second->data = 2;
	second-> next = third;

	//the third node(last node-tail) should be pointed to NULL. 
	third->data = 3;
	third->next = NULL;

	
	print_list(head);

	
#if 0
	//The insertion sort
	int c = 4;
	int b[] = {9,6,7,4};
	
	insert(b, c);

#endif
}