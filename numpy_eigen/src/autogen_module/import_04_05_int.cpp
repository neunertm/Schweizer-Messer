// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_04_05_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 4, 5 > >::register_converter();
}

