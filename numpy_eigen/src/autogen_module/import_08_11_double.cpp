// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_08_11_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 8, 11 > >::register_converter();
}

