#pragma once
#include "stdafx.h"
#include "structs.h"
#include <malloc.h>

Integer TRANS_N_Z(Natural t_Nat)
{
	Integer t_Int;
	t_Int.Numer_Z = (unsigned long int*)malloc((t_Nat.Dgr_N + 1) * sizeof(unsigned long int));

	t_Int.Numer_Z = t_Nat.Denom_N;
	
	t_Int.Dgr_Z = t_Nat.Dgr_N;
	t_Int.Sgn_Z = 0;

	return t_Int;
}