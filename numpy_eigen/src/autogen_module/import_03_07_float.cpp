// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_03_07_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 3, 7 > >::register_converter();
}

