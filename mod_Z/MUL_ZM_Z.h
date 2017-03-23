#pragma once
#include "stdafx.h"
#include "structs.h"


unsigned short int MUL_ZM_Z(Integer t_int)
{
	if (t_int.Sgn_Z == 1)
		t_int.Sgn_Z = 0;
	else
		t_int.Sgn_Z = 1;
	
	return t_int.Sgn_Z;
}