#pragma once
#include "stdafx.h"
#include "structs.h"


unsigned short int POZ_Z_D(Integer t_int)
{
	bool flag = true;
	unsigned long int i = 0;
	unsigned short int res;
	
	if ((i < t_int.Dgr_Z + 1) && (flag))
	{
		flag = (t_int.Numer_Z[i] == 0);
		i++;
	}

	else
		if (flag == true)
			res = 0;
		else
			if (t_int.Sgn_Z == 0)
				res = 2;
			else
				res = 1;
	
	return res;
}