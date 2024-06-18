#pragma once
#include <iostream>
#include <list>
#include "Branch.h"

class Tree
{
    private:
        double x_base = 0, y_base = 0, z_base = 0;
        double height = 0;
        std::list<Branch> branchList = {};
    public:
        Tree();
        Tree(double x0, double y0, double z0);
        Tree(double x0, double y0, double z0, double height);
        void printCoords();
        void grow_branches(Branch b);
        int getNumBranches();
        void printBranchList();
};