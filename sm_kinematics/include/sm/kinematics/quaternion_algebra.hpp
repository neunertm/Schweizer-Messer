/**
 * @file   quaternion_algebra.hpp
 * @author Paul Furgale <paul.furgale@utoronto.ca>
 * @date   Sun Nov 21 19:20:37 2010
 * 
 * @brief  Quaternion algebra from the paper Barfoot T D, Forbes J R, and Furgale P T. “Pose Estimation using Linearized Rotations and Quaternion Algebra”. Acta Astronautica, 2010. doi:10.1016/j.actaastro.2010.06.049.
 * 
 * 
 */

#ifndef SM_QUATERNION_ALGEBRA_HPP
#define SM_QUATERNION_ALGEBRA_HPP
#include <Eigen/Core>
#include <Eigen/Geometry>

namespace sm { namespace kinematics {
    
    Eigen::Matrix3d quat2r(Eigen::Vector4d const & q);
    Eigen::Vector4d r2quat(Eigen::Matrix3d const & C);
    Eigen::Vector4d r2quat(Eigen::Matrix3d const & C);
    Eigen::Vector4d axisAngle2quat(Eigen::Vector3d const & a);
    Eigen::Vector3d quat2AxisAngle(Eigen::Vector4d const & q);
    Eigen::Matrix4d quatPlus(Eigen::Vector4d const & q);
    Eigen::Vector4d qplus(Eigen::Vector4d const & q, Eigen::Vector4d const & p);
    Eigen::Matrix4d quatOPlus(Eigen::Vector4d const & q);
    Eigen::Vector4d qoplus(Eigen::Vector4d const & q, Eigen::Vector4d const & p);
    Eigen::Vector4d quatInv(Eigen::Vector4d const & q);
    Eigen::Vector3d quatRotate(Eigen::Vector4d const & q_a_b, Eigen::Vector3d const & v_b);
    Eigen::Vector4d quatRandom();
    Eigen::Vector4d quatIdentity();
    void invertQuat(Eigen::Vector4d & q);
    Eigen::Vector3d qeps(Eigen::Vector4d const & q);
    double qeta(Eigen::Vector4d const & q);
    // For estimation functions to handle a constraint-sensitive minimal parameterization for a quaternion update
    Eigen::Matrix<double,4,3> quatJacobian(Eigen::Vector4d const & q);
    Eigen::Vector4d updateQuat(Eigen::Vector4d const & q, Eigen::Vector3d const & dq);
    Eigen::Matrix<double,3,4> quatS(Eigen::Vector4d q);
    Eigen::Matrix<double,4,3> quatInvS(Eigen::Vector4d q);

        inline Eigen::Vector3d qlog(const Eigen::Vector4d & q){ return quat2AxisAngle(q); }
        inline Eigen::Vector4d qexp(const Eigen::Vector3d & theta){ return axisAngle2quat(theta); }

        /// \brief do spherical linear interpolation between q0 and q1 for times t = [0.0,1.0]
        Eigen::Vector4d qslerp(const Eigen::Vector4d & q0, const Eigen::Vector4d & q1, double t);
  }} // namespace sm::kinematics



#endif /* SM_QUATERNION_ALGEBRA_HPP */
