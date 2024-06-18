#include <iostream>
#include "Tree.h"
#include "Branch.h"

int main()
{
    Tree tree1 = Tree(0,0,0,3);
    Tree tree2 = Tree(12, 199, 56, 2.5);

    Branch b1 = Branch(2,1,1,1,1);
    Branch b2 = Branch(1, 0.5, 0.5, 0, 1);

    tree1.grow_branches(b1);
    tree1.grow_branches(b2);
    tree1.printBranchList();
    tree2.printBranchList();
}