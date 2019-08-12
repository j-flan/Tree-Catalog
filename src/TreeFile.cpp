#include "TreeFile.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void TreeFile::writeList(int i, Tree tree){
    //open text file
    ofstream fin;
    fin.open("treeFile.txt", ios::app);
    //make tree objects and save to file
    for (int i = 0; i < num ; i++){

        tree[i] = tree[i].makeTree();
        fin << tree[i].Gettype() << " " << tree[i].Getheight() << " " << tree[i].Getleaf() << " " << tree[i].Getbark() << endl;

    }
    fin.close();
}
