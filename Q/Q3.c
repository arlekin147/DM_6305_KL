t_Rat TRUNS_Z_Q (t_Int Z);

t_Rat TRUNS_Z_Q (t_Int Z)
{
	t_Rat Q;
	
	Q.Numer_Z = Z.Numer_Z;
	Q.Dgr_Z = Z.Dgr_Z;
	Q.Sgn_Z = Z.Sgn_Z;
	Q.Denom_N[0] = 1;
	Q.Dgr_N = 0;	
		
	return Q;
	
	//Алгоритм - Гульназ Кинзябаева
	//Код - Евгений Гонштейн
	//Время - ~5 минут
}
