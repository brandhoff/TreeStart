#include <iostream>
#include "Tree.h"
#include "Branch.h"
int main()
{
    Tree tree1 = Tree(1,2,1);


    Branch b = Branch();

    tree1.grow_br(b);

    std::cout << tree1.getNumBranches() << std::endl;
    //std::cout << tree1.height << std::endl;
}