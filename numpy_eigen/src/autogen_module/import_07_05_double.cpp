// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_07_05_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 7, 5 > >::register_converter();
}

