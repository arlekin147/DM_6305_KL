#pragma once
#include "stdafx.h"
#include "structs.h"
#include <malloc.h>


Natural ABS_Z_N(Integer t_Int)
{
	Natural t_Nat;

	t_Nat.Denom_N = (unsigned long int*)malloc((t_Int.Dgr_Z + 1) * sizeof(unsigned long int));

	t_Nat.Denom_N = t_Int.Numer_Z;
	t_Nat.Dgr_N = t_Int.Dgr_Z;

	

	return t_Nat;
}


