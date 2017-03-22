t_Rat ADD_QQ_Q(t_Rat ftQ, t_Rat sdQ);
/*
	fgEqual - флаг проверки равенства знаменателей при помощи модуля COM_NN_D
*/

t_Rat ADD_QQ_Q(t_Rat ftQ, t_Rat sdQ)
{
	int fgEqual;
	t_Nat ftN, sdN, N;
	t_Int ftZ, sdZ, Z1, Z2;
	
	//Разделение первого рационального числа на целое и натуральное
	ftZ.Numer_Z = ftQ.Numer_Z;
	ftZ.Dgr_Z = ftQ.Dgr_Z;
	ftZ.Sgn_Z = ftQ.Sgn_Z;
	ftN.Denom_N = ftQ.Denom_N;
	ftN.Dgr_N = ftQ.Dgr_N;
	
	//Разделение второго рационального числа на целое и натуральное
	sdZ.Numer_Z = sdQ.Numer_Z;
	sdZ.Dgr_Z = sdQ.Dgr_Z;
	sdZ.Sgn_Z = sdQ.Sgn_Z;
	sdN.Denom_N = sdQ.Denom_N;
	sdN.Dgr_N = sdQ.Dgr_N;
	
	fgEqual = COM_NN_D(ftN, sdN); //Проверка знаменателей первой и второй дробей на равенство

	if (equal != 0)
	{//В случае, если знаменатели не равны, приводим дроби к общему знаменателю
		sdZ.Numer_Z = sdQ.Denom_N;
		sdZ.Dgr_Z = sdQ.Dgr_N;
		sdZ.Sgn_Z = sdQ.Sgn_Z;
		
		Z1 = MUL_ZZ_Z(ftZ, sdZ); //Умножение числителя первой дроби на знаменатель второй дроби
		
		
		sdZ.Numer_Z = sdQ.Numer_Z;
		sdZ.Dgr_Z = sdQ.Dgr_Z;
		sdZ.Sgn_Z = sdQ.Sgn_Z;
		ftZ.Numer_Z = sdQ.Denom_N;
		ftZ.Dgr_Z = sdQ.Dgr_N;
		sdZ.Sgn_Z = sdQ.Sgn_Z;

		Z2 = MUL_ZZ_Z(sdZ, ftZ); //Умножение числителя второй дроби на знаменатель первой дроби
	
	
		ftN.Denom_N = ftQ.Denom_N;
		ftN.Dgr_N = ftQ.Dgr_N;
		sdN.Denom_N = sdQ.Denom_N;
		sdN.Dgr_N = sdQ.Dgr_N;
		
		N = MUL_NN_N(ftN, sdN); //Умножение знаменателей двух дробей между собой, результат - общий знаменатель двух исходных дробей
	}

	ADD_ZZ_Z(Z1, Z2); //Вычитание числителей первой и второй дроби

	ftQ.Numer_Z = Z.Numer_Z;
	ftQ.Dgr_Z = Z.Dgr_Z;
	ftQ.Sgn_Z = Z.Sgn_Z;
	ftQ.Denom_N = N.Denom_N;
	ftQ.Dgr_N = N.Dgr_N;
	
	RED_Q_Q(ftQ); //Сокращение полученной дроби
	
	return ftQ;
	
	//Алгоритм - Евгений Белоусов
	//Код - Евгений Белоусов, Евгений Гонштейн (ред.)
	//Время - 5-7 минут
}
