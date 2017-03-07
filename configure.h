//
// Created by AJ Pryor on 3/5/17.
//

// This file is for configuring the behavior of PRISM such as setting
// algorithm, CPU/GPU configuration to use, output formatting, etc.

#ifndef PRISM_CONFIGURE_H
#define PRISM_CONFIGURE_H

//#ifdef PRISM_ENABLE_DOUBLE_PRECISION
//typedef double PRISM_FLOAT_PRECISION;
//#else
typedef float PRISM_FLOAT_PRECISION;
//#endif //PRISM_ENABLE_DOUBLE_PRECISION

#include "meta.h"
#include "ArrayND.h"
#include "PRISM_entry.h"
#include "Multislice_entry.h"
#include "Multislice.h"
namespace PRISM {

	template <class T>
	using Array1D = PRISM::ArrayND<1, std::vector<T> >;
	template <class T>
	using Array2D = PRISM::ArrayND<2, std::vector<T> >;
	template <class T>
	using Array3D = PRISM::ArrayND<3, std::vector<T> >;
	template <class T>
	using Array4D = PRISM::ArrayND<4, std::vector<T> >;

	void configure(Metadata<PRISM_FLOAT_PRECISION>&);

	using entry_func = int (*)(Metadata<PRISM_FLOAT_PRECISION>&);
	//using ms_output_func = void (*)(Parameters<double>&);
//	template <class T>
//	using ms_output_func = void (*)(Parameters<T>&);
//	using entry_func = int (*)(Metadata<float>&);
	extern entry_func execute_plan;

//	extern ms_output_func buildMultisliceOutput;



}

#endif //PRISM_CONFIGURE_H