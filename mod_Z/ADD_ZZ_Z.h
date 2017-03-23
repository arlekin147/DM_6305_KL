#pragma once
#include "stdafx.h"
#include "structs.h"

Integer ADD_ZZ_Z(Integer t_Int, Integer z_Int)
{
	unsigned short int ch_sgn, ch_sgn_2;
	Integer summ;


	ch_sgn = POZ_Z_D(t_Int);
	ch_sgn_2 = POZ_Z_D(z_Int);

	if (ch_sgn == 1)
	{
		if (ch_sgn_2 == 1)
		{
			summ = ADD_NN_N(t_Int, z_Int);
			summ.Sgn_Z = 1;
		}

		else
		{
			summ = SUB_NN_N(t_Int, z_Int);

			if ((COM_NN_D(t_Int, z_Int) == 2) || (COM_NN_D(t_Int, z_Int) == 0))
				summ.Sgn_Z = 0;
			else
				summ.Sgn_Z = 1;
		}
	}
	else
		if (ch_sgn_2 == 0)
		{
			summ = ADD_NN_N(t_Int, z_Int);
			summ.Sgn_Z = 0;
		}

		else
		{
			if ((COM_NN_D(t_Int, z_Int) == 2) || (COM_NN_D(t_Int, z_Int) == 0))
			{
				summ = SUB_NN_N(t_Int, z_Int);
				summ.Sgn_Z = 0;
			}
			else
			{
				summ = SUB_NN_N(z_Int, t_Int);
				summ.Sgn_Z = 1;
			}
		}

	return summ;
}