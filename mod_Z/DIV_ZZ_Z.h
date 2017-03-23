#pragma once
#include "stdafx.h"
#include "structs.h"
#include <malloc.h>
#include <stdlib.h>

Integer DIV_ZZ_Z(Integer t_Int, Natural z_Nat)
{
	Integer res;
	if (COM_NN_D(t_Int, z_Nat) == 2)
	{
		if (COM_NN_D(t_Int, z_Nat) == 1)
		{
			if (POZ_Z_D(t_Int) == 2)
				res = DIV_NN_N(z_Nat, t_Int);
			
			else
				if (POZ_Z_D(t_Int) == 1)
				{
					t_Int = ABS_Z_N(t_Int);
					z_Nat = ABS_Z_N(z_Nat);
					res = DIV_NN_N(z_Nat, t_Int);
				}
				else
				{
					printf("Error.");
					getchar();
					exit(1);
				}

		}
		else
		{
			res.Numer_Z = (unsigned long int*)malloc(1 * sizeof(unsigned long int));
			res.Numer_Z[0] = 0;
			res.Dgr_Z = 0;
			res.Sgn_Z = t_Int.Sgn_Z;
		}

	}

	else
		if (COM_NN_D(t_Int, z_Nat) == 1)
		{
			if (POZ_Z_D(z_Nat) == 2)
				res = DIV_NN_N(t_Int, z_Nat);

			else
				if (POZ_Z_D(z_Nat) == 1)
				{
					if (POZ_Z_D(t_Int) == 1)
					{
						z_Nat = ABS_Z_N(z_Nat);
						res = DIV_NN_N(t_Int, z_Nat);
					}
					else
						if (POZ_Z_D(t_Int) == 2)
						{
							z_Nat = ABS_Z_N(z_Nat);
							t_Int = ABS_Z_N(t_Int);
							res = DIV_NN_Ò(t_Int, z_Nat);
						}
						else
						{
							res.Numer_Z = (unsigned long int*)malloc(1 * sizeof(unsigned long int));
							res.Numer_Z[0] = 0;
							res.Dgr_Z = 0;
							res.Sgn_Z = t_Int.Sgn_Z;
						}
				}
				else
				{
					printf("Error.");
					getchar();
					exit(1);
				}

		}
		
	
	return res;

}