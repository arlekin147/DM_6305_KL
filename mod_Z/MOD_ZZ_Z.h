#pragma once
#include "stdafx.h"
#include "structs.h"

Integer MOD_ZZ_Z(Integer n1, Natural n2)
{
	Integer temp;
	if (COM_NN_D(n1, n2) == 2)
	{
		while (SUB_ZZ_Z(n1, n2) >= n2)
		{
			n1 = SUB_ZZ_Z(n1, n2);
		}
		return SUB_ZZ_Z(n1, n2);
	}
	else if (COM_NN_D(n1, n2) == 1)
	{
		while (SUB_ZZ_Z(n2, n1) >= n1)
		{
			n2 = SUB_ZZ_Z(n2, n1);
		}
		return SUB_ZZ_Z(n2, n1);
	}
	else
	{
		temp = n1;
		temp.koef[n1.num] = 0;
		return temp;
	}
}