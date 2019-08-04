#include <iostream>
#include <string>
#include "Tree.h"

using namespace std;

int main()
{
    int num;
    cout << "How many trees?";
    cin >> num; cin.ignore();
    Tree tree[num];

    //make tree objects
    for (int i = 0; i < num ; i++){
        tree[i] = tree[i].makeTree();
    }
    //output list for testing
    for (int i = 0; i < num ; i++){
        tree[i].printList(i, tree[i]);
    }
    return 0;
}
