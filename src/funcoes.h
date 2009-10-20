/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef _FUNCOES_H_
#define _FUNCOES_H_

#include <math.h>

gdouble static expo(gdouble numero, gint exponencial)
{
	gdouble vfnumero = 1;
	int i;
	if (exponencial !=0) 
	for(i = 1; i <= exponencial; i = i + 1)
		vfnumero = vfnumero * numero;
	return vfnumero;
}	

gdouble static calcula_delta_s_aprox(gdouble gravidade, gint instante)
{
	gdouble espaco;
	
	espaco = (gravidade * expo(instante,2)) / 2;
	return espaco;
}
 
gdouble static calcula_aceleracao( gdouble massa, gdouble raio, gdouble altura,gint expM, gint expR)
{	
	gint exp;
	gfloat Const;
	Const=6.7;
	gint expG = -11;
	gdouble gravidade;
	
	exp = expM +  expG ;
	gravidade	= ((massa * Const) / ( expo( (raio * expo(10,expR) + altura),2) ));
	gravidade = gravidade * expo(10, exp);
	return gravidade;
}

gdouble static calcula_s(gdouble gravidade, gdouble instante)
{
	gdouble espaco;
	
	espaco = (gravidade * expo(instante,2)) / 2;
	return espaco;
}

gdouble static calcula_v(gdouble gravidade, gdouble instante)
{
	gdouble velocidade;
	
	velocidade = (gravidade * instante);
	return velocidade;
	
}

int static acha_tf(gdouble gravidade, gdouble altura)
{
	gdouble tf;
	
	tf = sqrt((2 * altura)/gravidade);
	return tf;
}

#endif
