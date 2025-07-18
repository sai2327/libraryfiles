#include "BinarySearchTree.h"
#include <bits/stdc++.h>
using namespace std;
int main() {
    BinarySearchTree bst;
    bst.Insert(10);
    bst.Insert(5);
    bst.Insert(15);
    bst.Insert(3);
    bst.Insert(7);
    cout << "Inorder: ";
    bst.Inorder();
    cout << "Search 7: " << (bst.Search(7) ? "Found" : "Not Found") << endl;
    bst.Delete(5);
    cout << "After Deleting 5: ";
    bst.Inorder();
    return 0;
}
