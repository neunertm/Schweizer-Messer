// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_04_11_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 4, 11 > >::register_converter();
}

