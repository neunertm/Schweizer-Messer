#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 1, 8> test_int_01_08(const Eigen::Matrix<int, 1, 8> & M)
{
	return M;
}
void export_int_01_08()
{
	boost::python::def("test_int_01_08",test_int_01_08);
}

