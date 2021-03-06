// @(#)root/tmva $Id$
// Author: Surya S Dwivedi 07/06/2019

/*************************************************************************
 * Copyright (C) 2019, Surya S Dwivedi                                    *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

////////////////////////////////////////////////////////////////////
// Testing LSTM-Layer forward pass for CPU implementation   //
////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TMVA/DNN/Architectures/Cpu.h"
#include "TestLSTMForwardPass.h"

using namespace TMVA::DNN;
using namespace TMVA::DNN::RNN;

int main() {

   using Scalar_t = Double_t;

   std::cout << "Testing LSTM Forward pass\n";

   // timesteps, batchsize, statesize, inputsize
   std::cout << testForwardPass<TCpu<Scalar_t>>(1, 2, 3, 2)  << "\n";
   //std::cout << testForwardPass<TCpu<Scalar_t>>(1, 8, 100, 50)  << "\n";
   //std::cout << testForwardPass<TCpu<Scalar_t>>(5, 9, 128, 64)  << "\n";
   return 0;
}
