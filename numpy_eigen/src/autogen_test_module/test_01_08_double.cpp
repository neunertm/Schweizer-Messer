#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, 1, 8> test_double_01_08(const Eigen::Matrix<double, 1, 8> & M)
{
	return M;
}
void export_double_01_08()
{
	boost::python::def("test_double_01_08",test_double_01_08);
}

