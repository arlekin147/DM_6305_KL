#pragma once
#include "stdafx.h"
#include "structs.h"

Integer MUL_ZZ_Z (Integer t_Int, Integer z_Int)
{
	Integer res;
	
	res = MUL_NN_N(ABS_Z_N(t_Int), ABS_Z_N(z_Int));

	if ((POZ_Z_D(t_Int)*POZ_Z_D(z_Int)) == 2)
		res.Sgn_Z = 1;
	else
		res.Sgn_Z = 0;

	return res;
}