// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_01_15_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 1, 15 > >::register_converter();
}

