// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_10_12_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 10, 12 > >::register_converter();
}

