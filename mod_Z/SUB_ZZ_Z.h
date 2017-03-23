#pragma once
#include "stdafx.h"
#include "structs.h"



Integer SUB_ZZ_Z(Integer ftZ, Integer sdZ)
{
	Integer Z;
	Natural N;

	if (COM_NN_D(ftN, sdN) == 2)
	{
		if (POZ_Z_D(Z1) == POZ_Z_D(Z2))
		{
			N = SUB_NN_N(ABS_Z_N(ftZ), ABS_Z_N(sdZ));
		}
		else
		{
			N = ADD_NN_N(ABS_Z_N(ftZ), ABS_Z_N(sdZ));
		}

		Z = TRANS_N_Z(N);

		if (POZ_Z_D(Z1) == 1)
		{
			Z = MUL_ZM_Z(Z);
		}
	}
	else
	{
		if (POZ_Z_D(Z1) == POZ_Z_D(Z2))
		{
			N = SUB_NN_N(ABS_Z_N(sdZ), ABS_Z_N(ftZ));
		}
		else
		{
			N = ADD_NN_N(ABS_Z_N(ftZ), ABS_Z_N(sdZ));
		}

		Z = TRANS_N_Z(N);

		if (POZ_Z_D(Z2) == 1)
		{
			Z = MUL_ZM_Z(Z);
		}
	}

	return Z;


}
