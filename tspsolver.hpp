https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef _TSP_SOLVER_HPP
#define _TSP_SOLVER_HPP

#include <iostream>

#include "listofpoints.hpp"
#include "tspcycle.hpp"

// the class implement the TSP solver
class TSPSolver
{
  private:  
  // may hold the following members:
  ListOfPoints m_list;
  TSPCycle m_solution;
  // you may remove/modify these in any way you want

  public:
    TSPSolver(ListOfPoints &list);

    void solve();

    TSPCycle& getSolution();
};

#endif
