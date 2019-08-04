#include <iostream>
#include "Tree.h"

using namespace std;

Tree::Tree(){}//default contructor for array initialization
//object constructor
Tree::Tree(string type, int height, string leaf, string bark){
    Settype(type);
    Setheight(height);
    Setleaf(leaf);
    Setbark(bark);
}
//gets and sets
string Tree::Gettype(){return treeType;}
void Tree::Settype(string type) {treeType = type;}
int Tree::Getheight() { return treeHeight; }
void Tree::Setheight(int height) { treeHeight = height; }
string Tree::Getleaf() { return treeLeaf; }
void Tree::Setleaf(string leaf) { treeLeaf = leaf; }
string Tree::Getbark() { return treeBark; }
void Tree::Setbark(string bark) { treeBark = bark; }

//tree object user input
Tree Tree::makeTree(){

    //vars
    string type, leaf, bark;
    int height;

    //user input
    cout << "Type of tree: "; getline(cin, type);
    cout << "leaf type: "; getline(cin, leaf);
    cout << "bark type: "; getline(cin, bark);
    cout << "Height in feet: "; cin >> height; cin.ignore();
    return (Tree(type, height, leaf, bark));//return object
}
//output tree object
void Tree::printList(int i, Tree tree){
    cout << "Tree " << i+1 << ": " << tree.Gettype() << ", " << tree.Getheight() << " ft, "
            << tree.Getleaf() << " leaf, " << tree.Getbark() << " bark."<<endl;
}