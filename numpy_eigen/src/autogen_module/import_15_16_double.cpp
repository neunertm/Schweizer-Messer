// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_15_16_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 15, 16 > >::register_converter();
}
