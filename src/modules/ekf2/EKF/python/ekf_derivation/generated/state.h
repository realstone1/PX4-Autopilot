// --------------------------------------------------
// This file was autogenerated, do NOT modify by hand
// --------------------------------------------------

#ifndef EKF_STATE_H
#define EKF_STATE_H

namespace estimator
{
struct IdxDof { unsigned idx; unsigned dof; };
namespace State {
	static constexpr IdxDof quat_nominal{0, 4};
	static constexpr IdxDof vel{4, 3};
	static constexpr IdxDof pos{7, 3};
	static constexpr IdxDof gyro_bias{10, 3};
	static constexpr IdxDof accel_bias{13, 3};
	static constexpr IdxDof mag_I{16, 3};
	static constexpr IdxDof mag_B{19, 3};
	static constexpr IdxDof wind_vel{22, 2};
};
}
#endif // !EKF_STATE_H
