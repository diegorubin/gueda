/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * callbacks.c
 * Copyright (C) Diego Rubin 2007 <rubin.diego@gmail.com>
 * 
 * callbacks.c is free software.
 * 
 * You may redistribute it and/or modify it under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * callbacks.c is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with callbacks.c.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */

#include <gtk/gtk.h>

#include "callbacks.h"
#include "objetos_interface.h"
#include "funcoes.h"
#include "gnuplot_i.h"

static void muda_planeta1(GtkWidget *widget,
						 gpointer data)
{
	iPlaneta1 = gtk_combo_box_get_active(GTK_COMBO_BOX(cmbPlaneta1));
	
	/*terra*/
	if(iPlaneta1 == 0){
		cImg1 = "terra.png";
		cTitulo1 = "Planeta Terra";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"6.0");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"24");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"6.4");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"6");
	}
	/*lua*/
	if(iPlaneta1 == 1){
		cImg1 = "lua.png";
		cTitulo1 = "Lua";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"7.3");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"22");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"1.7");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"6");
	}
	/*marte*/
	if(iPlaneta1 ==2){
		cImg1 = "marte.png";
		cTitulo1 = "Planeta Marte";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"6.42");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"23");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"3.4");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"6");
	}
	/*mercurio*/
	if(iPlaneta1 == 3) {
		cImg1 = "mercurio.png";
		cTitulo1 = "Planeta Mercúrio";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"3.30");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"23");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"2.43");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"6");
	}
	/*jupiter*/
	if(iPlaneta1 == 4) {
		cImg1 = "jupiter.png";
		cTitulo1 = "Planeta Júpiter";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"1.9");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"27");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"7.15");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"7");
	}
	/*venus*/
	if(iPlaneta1 == 5) {
		cImg1 = "venus.png";
		cTitulo1 = "Planeta Vênus";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"4.87");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"24");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"6.05");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"6");
	}
	/*saturno*/
	if(iPlaneta1 == 6) {
		cImg1 = "saturno.png";
		cTitulo1 = "Planeta Saturno";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"5.69");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"26");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"6.0");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"7");
	}
	/*urano*/
	if(iPlaneta1 == 7) {
		cImg1 = "urano.png";
		cTitulo1 = "Planeta Urano";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"8.686");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"25");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"2.5862");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"7");
	}
	/*netuno*/
	if(iPlaneta1 == 8) {
		cImg1 = "netuno.png";
		cTitulo1 = "Planeta Netuno";
		gtk_entry_set_text(GTK_ENTRY(entMassa1),"1.024");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa1),"26");
		gtk_entry_set_text(GTK_ENTRY(entRaio1),"2.4786");
		gtk_entry_set_text(GTK_ENTRY(entExpraio1),"7");
	}
	gtk_widget_destroy(imgBack1);
	imgBack1 = gtk_image_new_from_file(g_strdup_printf("%s%s",dir_pixmaps,cImg1));
	gtk_table_attach (GTK_TABLE(tblPrincipal), imgBack1, 1, 2, 1, 5, GTK_FILL, GTK_SHRINK, 0, 0);
	gtk_widget_show(imgBack1);
}

static void muda_planeta2(GtkWidget *widget,
						 gpointer data)
{
	iPlaneta2 = gtk_combo_box_get_active(GTK_COMBO_BOX(cmbPlaneta2));
	g_print("%d", iPlaneta2);
	/*terra*/
	if(iPlaneta2 == 0){
		cImg2 = "terra.png";
		cTitulo2 = "Planeta Terra";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"6.0");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"24");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"6.4");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"6");
	}
	/*lua*/
	if(iPlaneta2 == 1){
		cImg2 = "lua.png";
		cTitulo2 = "Lua";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"7.3");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"22");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"1.7");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"6");
	}
	/*marte*/
	if(iPlaneta2 ==2){
		cImg2 = "marte.png";
		cTitulo2 = "Planeta Marte";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"6.42");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"23");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"3.4");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"6");
	}
	/*mercurio*/
	if(iPlaneta2 == 3) {
		cImg2 = "mercurio.png";
		cTitulo2 = "Planeta Mercúrio";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"3.30");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"23");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"2.43");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"6");
	}
	/*jupiter*/
	if(iPlaneta2 == 4) {
		cImg2 = "jupiter.png";
		cTitulo2 = "Planeta Júpiter";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"1.9");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"27");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"7.15");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"7");
	}
	/*venus*/
	if(iPlaneta2 == 5) {
		cImg2 = "venus.png";
		cTitulo2 = "Planeta Vênus";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"4.87");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"24");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"6.05");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"6");
	}
	/*saturno*/
	if(iPlaneta2 == 6) {
		cImg2 = "saturno.png";
		cTitulo2 = "Planeta Saturno";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"5.69");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"26");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"6.0");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"7");
	}
	/*urano*/
	if(iPlaneta2 == 7) {
		cImg2 = "urano.png";
		cTitulo2 = "Planeta Urano";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"8.686");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"25");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"2.5862");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"7");
	}
	/*netuno*/
	if(iPlaneta2 == 8) {
		cImg2 = "netuno.png";
		cTitulo2 = "Planeta Netuno";
		gtk_entry_set_text(GTK_ENTRY(entMassa2),"1.024");
		gtk_entry_set_text(GTK_ENTRY(entExpmassa2),"26");
		gtk_entry_set_text(GTK_ENTRY(entRaio2),"2.4786");
		gtk_entry_set_text(GTK_ENTRY(entExpraio2),"7");
	}
	gtk_widget_destroy(imgBack2);
	imgBack2 = gtk_image_new_from_file(g_strdup_printf("%s%s",dir_pixmaps,cImg2));
	gtk_table_attach (GTK_TABLE(tblPrincipal), imgBack2, 5, 6, 1, 5, GTK_FILL, GTK_SHRINK, 0, 0);
	gtk_widget_show(imgBack2);
}

static void soltar(GtkWidget *widget,
					gpointer data)
{
	/*captura dados*/
	fMassa1 = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entMassa1)),NULL);
	iExpmassa1 = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entExpmassa1)),NULL);
	fRaio1 = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entRaio1)), NULL);
	iExpraio1 = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entExpraio1)), NULL);
	fMassa2 = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entMassa2)),NULL);
	iExpmassa2 = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entExpmassa2)),NULL);
	fRaio2 = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entRaio2)),NULL);
	iExpraio2 = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entExpraio2)),NULL);
	fAltura = g_strtod (gtk_entry_get_text ( GTK_ENTRY(entAltura)),NULL);
	
	int i = 1;
	if(fAltura > 210) i = 2;
	if(fAltura > 600) i = 4;					
	if(fAltura > 1000) i = 6;					
	int t;
	int iespaco1 = 0;
	int iespaco2 = 0;
	nimg1 = 1;
	
	tf = acha_tf(calcula_aceleracao(fMassa1, fRaio1, fAltura, iExpmassa1, iExpraio1), fAltura)+1; 	
	
	for(t = 0; t <= tf+1;t = t + i){
		ct1[nimg1] = g_strdup_printf ("%d",t);
		
		//exibe os pontos e conecta os mesmos a sinais
		imgObjeto1[nimg1] = gtk_image_new_from_file (g_strdup_printf("%sobjeto.png",dir_pixmaps));
		evnObjeto1[nimg1] = gtk_event_box_new();
		gtk_container_add(GTK_CONTAINER(evnObjeto1[nimg1]), imgObjeto1[nimg1]);
		g_signal_connect (G_OBJECT(evnObjeto1[nimg1]), "button_press_event", G_CALLBACK(dados_pontos1),ct1[nimg1]);
		gtk_table_attach(GTK_TABLE(tblBack1), evnObjeto1[nimg1], 1, 2, iespaco1, iespaco1 + 10, GTK_FILL, GTK_FILL, 0, 0);
		gtk_widget_show (imgObjeto1[nimg1]);
		gtk_widget_show (evnObjeto1[nimg1]);
		
		nimg1= nimg1 + 1;
		iespaco1 = (calcula_delta_s_aprox(calcula_aceleracao(fMassa1,fRaio1,fAltura - iespaco1,iExpmassa1,iExpraio1), t))/i;
	}
			
	tf = acha_tf(calcula_aceleracao(fMassa2, fRaio2, fAltura, iExpmassa2, iExpraio2), fAltura)+1;
	nimg2 = 1;
						
	for(t = 0; t <= tf+1;t = t + i){
		ct2[nimg2] = g_strdup_printf ("%d",t);
		
		//exibe os pontos e conecta os mesmos a sinais
		imgObjeto2[nimg2] = gtk_image_new_from_file (g_strdup_printf("%sobjeto.png",dir_pixmaps));
		evnObjeto2[nimg2] = gtk_event_box_new();
		gtk_container_add(GTK_CONTAINER(evnObjeto2[nimg2]), imgObjeto2[nimg2]);
		g_signal_connect (G_OBJECT(evnObjeto2[nimg2]), "button_press_event", G_CALLBACK(dados_pontos2),ct2[nimg2]);
		gtk_table_attach(GTK_TABLE(tblBack2), evnObjeto2[nimg2], 1, 2, iespaco2, iespaco2 + 10, GTK_FILL, GTK_FILL, 0, 0);
		gtk_widget_show (imgObjeto2[nimg2]);
		gtk_widget_show (evnObjeto2[nimg2]);
		
		nimg2= nimg2 + 1;
		iespaco2 = (calcula_delta_s_aprox(calcula_aceleracao(fMassa2,fRaio2,fAltura - iespaco2,iExpmassa2,iExpraio2), t))/i;
	}
	
	destroi_primeiro_menu(winPrincipal, NULL);
	gera_segundo_menu(winPrincipal, NULL);
	
}

static void calcula_instante(GtkWidget *widget,
							 gpointer data)
{
	gdouble fInstante = g_strtod (gtk_entry_get_text(GTK_ENTRY(entInstante)), NULL);
	
	/*primeiro planeta*/
	gdouble fAcelerecao_ins = calcula_aceleracao(fMassa1, fRaio1, fAltura, iExpmassa1, iExpraio1);
	gdouble fAltura_ins = fAltura - calcula_s(fAcelerecao_ins, fInstante);
	gdouble fVelocidade_ins = calcula_v(fAcelerecao_ins, fInstante);
	
	if( fAltura_ins < 0 ){
		fAcelerecao_ins = 0;
		fAltura_ins = 0;
		fVelocidade_ins = 0;
	}
	
	gtk_label_set_label(GTK_LABEL(lblInstante1), g_strdup_printf("Instante: %.2f", fInstante));
	gtk_label_set_label(GTK_LABEL(lblAceleracao1), g_strdup_printf("Aceleração: %.2f m/s²",fAcelerecao_ins));
	gtk_label_set_label(GTK_LABEL(lblAltura1), g_strdup_printf("Altura: %.2f m", fAltura_ins));
	gtk_label_set_label(GTK_LABEL(lblVelocidade1), g_strdup_printf("Velocidade: %.2f m/s", fVelocidade_ins));
	
	/*segundo planeta*/
	fAcelerecao_ins = calcula_aceleracao(fMassa2, fRaio2, fAltura, iExpmassa2, iExpraio2);
	fAltura_ins = fAltura - calcula_s(fAcelerecao_ins, fInstante);
	fVelocidade_ins = calcula_v(fAcelerecao_ins, fInstante);
	
	if( fAltura_ins < 0 ){
		fAcelerecao_ins = 0;
		fAltura_ins = 0;
		fVelocidade_ins = 0;
	}
	
	gtk_label_set_label(GTK_LABEL(lblInstante2), g_strdup_printf("Instante: %.2f", fInstante));
	gtk_label_set_label(GTK_LABEL(lblAceleracao2), g_strdup_printf("Aceleração: %.2f m/s²",fAcelerecao_ins));
	gtk_label_set_label(GTK_LABEL(lblAltura2), g_strdup_printf("Altura: %.2f m", fAltura_ins));
	gtk_label_set_label(GTK_LABEL(lblVelocidade2), g_strdup_printf("Velocidade: %.2f m/s", fVelocidade_ins)); 
}

static void gera_primeiro_menu (GtkWidget *widget,
								gpointer	data)
{
	//arruma os dados das entrys
	if (!fMassa1 && !fMassa2){
		iPlaneta1 = 0;
		iPlaneta2 = 1;
		fMassa1 = 6.0;
		fMassa2 = 7.3;
		iExpmassa1 = 24;
		iExpmassa2 = 22;
		fRaio1 = 6.4;
		fRaio2 = 1.7;
		iExpraio1 = 6;
		iExpraio2 = 6;
	}
	/*implementacao das tables*/
	tblDados1 = gtk_table_new (4, 2, FALSE);
	gtk_table_attach (GTK_TABLE(tblPrincipal), tblDados1, 1, 2, 6, 7, GTK_FILL, GTK_SHRINK, 0, 0);
	
	tblDados2 = gtk_table_new (4, 2, FALSE);
	gtk_table_attach (GTK_TABLE(tblPrincipal), tblDados2, 5, 6, 6, 7, GTK_FILL, GTK_SHRINK, 0, 0);
	
	/*implementacao das labels*/
	lblMassa1 = gtk_label_new ("Massa (Kg)");
	gtk_table_attach (GTK_TABLE(tblDados1), lblMassa1, 0, 1, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblMassa2 = gtk_label_new ("Massa (Kg)");
	gtk_table_attach (GTK_TABLE(tblDados2), lblMassa2, 0, 1, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblAltura = gtk_label_new ("Altura (m)");
	gtk_table_attach (GTK_TABLE(tblPrincipal), lblAltura, 3, 4, 5, 6, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblExpmassa1 = gtk_label_new (" X 10 ");
	gtk_table_attach (GTK_TABLE(tblDados1), lblExpmassa1, 2, 3, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblExpmassa2 = gtk_label_new (" X 10 ");
	gtk_table_attach (GTK_TABLE(tblDados2), lblExpmassa2, 2, 3, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblRaio1 = gtk_label_new("Raio (m)");
	gtk_table_attach (GTK_TABLE(tblDados1), lblRaio1, 0, 1, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblRaio2 = gtk_label_new("Raio (m)");
	gtk_table_attach (GTK_TABLE(tblDados2), lblRaio2, 0, 1, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblExpraio1 = gtk_label_new(" X 10 ");
	gtk_table_attach (GTK_TABLE(tblDados1), lblExpraio1, 2, 3, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblExpraio2 = gtk_label_new(" X 10 ");
	gtk_table_attach (GTK_TABLE(tblDados2), lblExpraio2, 2, 3, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	/*implementacao das entry*/
	entMassa1 = gtk_entry_new();
	gtk_entry_set_width_chars (GTK_ENTRY(entMassa1), 6);
	gtk_entry_set_text(GTK_ENTRY(entMassa1),g_strdup_printf("%.2f", fMassa1));
	gtk_table_attach ( GTK_TABLE(tblDados1), entMassa1, 1, 2, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	entMassa2 = gtk_entry_new();
	gtk_entry_set_width_chars (GTK_ENTRY(entMassa2), 6);
	gtk_entry_set_text(GTK_ENTRY(entMassa2),g_strdup_printf("%.2f", fMassa2));
	gtk_table_attach ( GTK_TABLE(tblDados2), entMassa2, 1, 2, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	entAltura = gtk_entry_new();
	gtk_entry_set_width_chars (GTK_ENTRY(entAltura), 20);
	gtk_table_attach ( GTK_TABLE(tblPrincipal), entAltura, 3, 4, 6, 7, GTK_FILL, GTK_SHRINK, 0, 0);
	
	entExpmassa1 = gtk_entry_new();
	gtk_entry_set_width_chars (GTK_ENTRY(entExpmassa1), 2);
	gtk_entry_set_text(GTK_ENTRY(entExpmassa1),g_strdup_printf("%d", iExpmassa1));
	gtk_table_attach (GTK_TABLE(tblDados1), entExpmassa1, 3, 4, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);

	entExpmassa2 = gtk_entry_new();
	gtk_entry_set_width_chars(GTK_ENTRY(entExpmassa2), 2);
	gtk_entry_set_text(GTK_ENTRY(entExpmassa2),g_strdup_printf("%d", iExpmassa2));
	gtk_table_attach (GTK_TABLE(tblDados2), entExpmassa2, 3, 4, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	entRaio1 = gtk_entry_new();
	gtk_entry_set_width_chars(GTK_ENTRY(entRaio1), 6);
	gtk_entry_set_text(GTK_ENTRY(entRaio1),g_strdup_printf("%.2f", fRaio1));
	gtk_table_attach (GTK_TABLE(tblDados1), entRaio1, 1, 2, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	entRaio2 = gtk_entry_new();
	gtk_entry_set_width_chars(GTK_ENTRY(entRaio2),6);
	gtk_entry_set_text(GTK_ENTRY(entRaio2),g_strdup_printf("%.2f", fRaio2));
	gtk_table_attach (GTK_TABLE(tblDados2), entRaio2, 1, 2, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	entExpraio1 = gtk_entry_new();
	gtk_entry_set_width_chars(GTK_ENTRY(entExpraio1),2);
	gtk_entry_set_text(GTK_ENTRY(entExpraio1),g_strdup_printf("%d", iExpraio1));
	gtk_table_attach (GTK_TABLE(tblDados1), entExpraio1, 3, 4, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	entExpraio2 = gtk_entry_new();
	gtk_entry_set_width_chars(GTK_ENTRY(entExpraio2),2);
	gtk_entry_set_text(GTK_ENTRY(entExpraio2),g_strdup_printf("%d", iExpraio2));
	gtk_table_attach (GTK_TABLE(tblDados2), entExpraio2, 3, 4, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	/*implementacao das combos*/
	cmbPlaneta1 = gtk_combo_box_new_text();
	//monta a lista de planetas
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 0 , "Planeta Terra");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 1 , "Lua");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 2 , "Planeta Marte");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 3 , "Planeta Mercúrio");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 4 , "Planeta Júpiter");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 5 , "Planeta Vênus");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 6 , "Planeta Saturno");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 7 , "Planeta Urano");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta1), 8 , "Planeta Netuno");
	//fim da lista
	gtk_combo_box_set_active (GTK_COMBO_BOX(cmbPlaneta1), iPlaneta1);
	g_signal_connect(G_OBJECT(cmbPlaneta1), "changed", G_CALLBACK(muda_planeta1), NULL);
	gtk_table_attach (GTK_TABLE(tblPrincipal), cmbPlaneta1, 1, 2, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	cmbPlaneta2 = gtk_combo_box_new_text();
	//monta a lista de planetas
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 0 , "Planeta Terra");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 1 , "Lua");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 2 , "Planeta Marte");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 3 , "Planeta Mercúrio");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 4 , "Planeta Júpiter");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 5 , "Planeta Vênus");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 6 , "Planeta Saturno");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 7 , "Planeta Urano");
	gtk_combo_box_insert_text(GTK_COMBO_BOX(cmbPlaneta2), 8 , "Planeta Netuno");
	//fim da list
	gtk_combo_box_set_active(GTK_COMBO_BOX(cmbPlaneta2),iPlaneta2);
	g_signal_connect(G_OBJECT(cmbPlaneta2), "changed", G_CALLBACK(muda_planeta2), NULL);
	gtk_table_attach (GTK_TABLE(tblPrincipal), cmbPlaneta2, 5, 6, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
									
	/*implementacao dos buttons*/
	btnJogar = gtk_button_new_with_label ("Soltar");
	gtk_table_attach ( GTK_TABLE(tblPrincipal), btnJogar, 3, 4, 7, 8, GTK_FILL, GTK_SHRINK, 0, 0);
	g_signal_connect (G_OBJECT(btnJogar), "clicked", G_CALLBACK(soltar),NULL);
	
	gtk_widget_show_all(winPrincipal);
}

static void gera_segundo_menu(GtkWidget *widget,
							  gpointer data)
{
	//titulo
	if(!cTitulo1) cTitulo1 = "Planeta Terra";
	if(!cTitulo2) cTitulo2 = "Lua";
	/*implementacao das tables*/
	tblRDados1 = gtk_table_new( 4, 2,FALSE);
	
	tblRDados2 = gtk_table_new(4,2,FALSE);
	
	/*implementacao das imagens*/
	imgVoltar = gtk_image_new_from_stock(GTK_STOCK_GO_BACK, GTK_ICON_SIZE_MENU);
									  
	/*implementacao das frames*/
	frmDados1 = gtk_frame_new ("Resultados");
	gtk_table_attach (GTK_TABLE(tblPrincipal), frmDados1, 1, 2, 5, 6, GTK_FILL, GTK_SHRINK, 0, 0);
	gtk_container_add (GTK_CONTAINER(frmDados1), tblRDados1);
	
	frmDados2 = gtk_frame_new ("Resultados");
	gtk_table_attach (GTK_TABLE(tblPrincipal), frmDados2, 5, 6, 5, 6, GTK_FILL, GTK_SHRINK, 0, 0);
	gtk_container_add (GTK_CONTAINER(frmDados2), tblRDados2);
	
	/* implementacao das labels*/
	lblTitulo1 = gtk_label_new(cTitulo1);
	gtk_table_attach(GTK_TABLE(tblPrincipal), lblTitulo1, 1, 2, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
								  
	lblTitulo2 = gtk_label_new(cTitulo2);
	gtk_table_attach(GTK_TABLE(tblPrincipal), lblTitulo2, 5, 6, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);					
	
	lblAlturaesc = gtk_label_new(g_strdup_printf("Altura Escolhida: %.2f", fAltura));
	gtk_label_set_width_chars(GTK_LABEL(lblAlturaesc), 20);
	gtk_table_attach(GTK_TABLE(tblPrincipal), lblAlturaesc, 3, 4, 5, 6, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblInstante1 = gtk_label_new("Instante: ");
	gtk_table_attach (GTK_TABLE(tblRDados1), lblInstante1, 0, 1, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblVelocidade1 = gtk_label_new("Velocidade: ");
	gtk_table_attach (GTK_TABLE(tblRDados1), lblVelocidade1, 0, 1, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblAceleracao1 = gtk_label_new("Aceleração: ");
	gtk_table_attach (GTK_TABLE(tblRDados1), lblAceleracao1, 0, 1, 2, 3, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblAltura1 = gtk_label_new("Altura: ");
	gtk_table_attach (GTK_TABLE(tblRDados1), lblAltura1, 0, 1, 3, 4, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblInstante2 = gtk_label_new("Instante: ");
	gtk_table_attach (GTK_TABLE(tblRDados2), lblInstante2, 0, 1, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblVelocidade2 = gtk_label_new("Velocidade: ");
	gtk_table_attach (GTK_TABLE(tblRDados2), lblVelocidade2, 0, 1, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblAceleracao2 = gtk_label_new("Aceleração: ");
	gtk_table_attach (GTK_TABLE(tblRDados2), lblAceleracao2, 0, 1, 2, 3, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblAltura2 = gtk_label_new("Altura: ");
	gtk_table_attach (GTK_TABLE(tblRDados2), lblAltura2, 0, 1, 3, 4, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblInstante = gtk_label_new("Digite o instante,\nem segundos,\nque deseja obter informações:");
	gtk_table_attach (GTK_TABLE(tblPrincipal), lblInstante,1, 2, 6, 7, GTK_FILL, GTK_SHRINK, 0, 0);
	
	/*implementacao das entrys*/
	entInstante = gtk_entry_new();
	gtk_table_attach(GTK_TABLE(tblPrincipal), entInstante, 3,4,6,7, GTK_FILL,GTK_SHRINK, 0, 0);
	
	/*implementacao dos buttons*/
	btnChecar = gtk_button_new_with_label("Checar");
	gtk_table_attach(GTK_TABLE(tblPrincipal), btnChecar, 5, 6, 6, 7, GTK_FILL, GTK_SHRINK, 0, 0);
	g_signal_connect(G_OBJECT(btnChecar), "clicked", G_CALLBACK(calcula_instante), NULL);	
	
	btnGraficos = gtk_button_new_with_label("Graficos");
	gtk_table_attach(GTK_TABLE(tblPrincipal), btnGraficos, 3, 4, 7, 8, GTK_FILL, GTK_SHRINK, 0, 0);
	g_signal_connect(G_OBJECT(btnGraficos), "clicked", G_CALLBACK(tela_graficos), NULL);
								  
	btnVoltar = gtk_button_new_with_label("Voltar");
	gtk_table_attach(GTK_TABLE(tblPrincipal), btnVoltar, 5,6,7,8, GTK_FILL, GTK_SHRINK, 0, 0);
	gtk_button_set_image(GTK_BUTTON(btnVoltar), imgVoltar);
	g_signal_connect(G_OBJECT(btnVoltar), "clicked", G_CALLBACK(destroi_segundo_menu), NULL);
							
	gtk_widget_show_all(winPrincipal);
}

static void destroi_primeiro_menu(GtkWidget *widget, 
								  gpointer data)
{
	gtk_widget_destroy(cmbPlaneta1);
	gtk_widget_destroy(cmbPlaneta2);
	gtk_widget_destroy(entAltura);
	gtk_widget_destroy(lblAltura);
	gtk_widget_destroy(tblDados1);
	gtk_widget_destroy(tblDados2);
	gtk_widget_destroy(btnJogar);
}

static void destroi_segundo_menu(GtkWidget *widget,
								 gpointer data)
{
	
	int k;
	for(k = nimg1;k >=1 ; k--){
		gtk_widget_destroy(imgObjeto1[k]);
		gtk_widget_destroy(evnObjeto1[k]);}
	for(k = nimg2;k >=1; k--){
		gtk_widget_destroy(imgObjeto2[k]);
		gtk_widget_destroy(evnObjeto2[k]);}
	
	gtk_widget_destroy(lblTitulo1);
	gtk_widget_destroy(lblTitulo2);
	gtk_widget_destroy(frmDados1);
	gtk_widget_destroy(frmDados2);
	gtk_widget_destroy(lblAlturaesc);
	gtk_widget_destroy(lblInstante);
	gtk_widget_destroy(entInstante);
	gtk_widget_destroy(btnChecar);
	gtk_widget_destroy(btnVoltar);
	gtk_widget_destroy(btnGraficos);
	
	gera_primeiro_menu(winPrincipal, NULL);
 }

static void  dados_pontos1 (GtkWidget      *widget,
						   GdkEvent	      *event,
							gchar 	*data)
 		 {
			gint iInstante = g_strtod(data,NULL) - 1;
			/*primeiro planeta*/
			gdouble fAcelerecao_ins = calcula_aceleracao(fMassa1, fRaio1, fAltura, iExpmassa1, iExpraio1);
			gdouble fAltura_ins = fAltura - calcula_s(fAcelerecao_ins, iInstante);
			gdouble fVelocidade_ins = calcula_v(fAcelerecao_ins, iInstante);
	
			if( fAltura_ins < 0 ){
				fAcelerecao_ins = 0;
				fAltura_ins = 0;
				fVelocidade_ins = 0;
			}
	
			gtk_label_set_label(GTK_LABEL(lblAceleracao1), g_strdup_printf("Aceleração: %.2f m/s²",fAcelerecao_ins));
			gtk_label_set_label(GTK_LABEL(lblAltura1), g_strdup_printf("Altura: %.2f m", fAltura_ins));
			gtk_label_set_label(GTK_LABEL(lblVelocidade1), g_strdup_printf("Velocidade: %.2f m/s", fVelocidade_ins));
			gtk_label_set_label(GTK_LABEL(lblInstante1), g_strdup_printf("Instante: %d", iInstante));
			
       }

static void  dados_pontos2 (GtkWidget      *widget,
						   GdkEvent	      *event,
							gchar 	*data)
 		 {
			gint iInstante = g_strtod(data,NULL) - 1;
			gdouble fAcelerecao_ins = calcula_aceleracao(fMassa2, fRaio2, fAltura, iExpmassa2, iExpraio2);
			gdouble fAltura_ins = fAltura - calcula_s(fAcelerecao_ins, iInstante);
			gdouble fVelocidade_ins = calcula_v(fAcelerecao_ins, iInstante);
	
			if( fAltura_ins < 0 ){
				fAcelerecao_ins = 0;
				fAltura_ins = 0;
				fVelocidade_ins = 0;
			}
	
			gtk_label_set_label(GTK_LABEL(lblAceleracao2), g_strdup_printf("Aceleração: %.2f m/s²",fAcelerecao_ins));
			gtk_label_set_label(GTK_LABEL(lblAltura2), g_strdup_printf("Altura: %.2f m", fAltura_ins));
			gtk_label_set_label(GTK_LABEL(lblVelocidade2), g_strdup_printf("Velocidade: %.2f m/s", fVelocidade_ins));
	    	gtk_label_set_label(GTK_LABEL(lblInstante2), g_strdup_printf("Instante: %d", iInstante));
			
       }

static void tela_graficos (GtkWidget *widget,
						   gpointer data)
{
	#define dir_plot g_strdup_printf("%s/.gravit/plot/",g_get_home_dir())
	
	gnuplot_ctrl  *sessao;
	
	sessao = gnuplot_init();
	gnuplot_cmd(sessao, "set term png nocrop medium size 300,225");
		
	GtkWidget *winGraficos;
	GtkWidget *tblGraficos;
	GtkWidget *imgGrafico1a;
	GtkWidget *imgGrafico1b;
	GtkWidget *imgGrafico2a;
	GtkWidget *imgGrafico2b;
	GtkWidget *lblGrafico1a;
	GtkWidget *lblGrafico1b;
	GtkWidget *lblGrafico2a;
	GtkWidget *lblGrafico2b;
	
	
	/*equacoes para os graficos*/
	double g = calcula_aceleracao(fMassa1, fRaio1, fAltura, iExpmassa1, iExpraio1);
	double vf = calcula_v(g, tf);
	
	//grafico 1a
	gnuplot_cmd(sessao,"set output \'%s/grafico1a.png\'",dir_plot);
	gnuplot_cmd(sessao,"set xrange[0:%d]; set yrange[0:%0.0f]",tf +2, fAltura *1.3);
	gnuplot_cmd(sessao,"plot (%0.0f - (%0.0f*x*x)/2)",fAltura, g);
	
	//grafico 1b
	gnuplot_cmd(sessao,"set output \'%s/grafico1b.png\'",dir_plot);
	gnuplot_cmd(sessao, "set xrange[0:%d]; set yrange[0:%0.0f]", tf, vf );
	gnuplot_cmd(sessao, "plot (%0.0f * x)", g);
		
	g = calcula_aceleracao(fMassa2, fRaio2, fAltura, iExpmassa2, iExpraio2);
	vf = calcula_v(g, tf);
	
	//grafico 2a
	gnuplot_cmd(sessao,"set output \'%s/grafico2a.png\'",dir_plot);
	gnuplot_cmd(sessao,"set xrange[0:%d]; set yrange[0:%0.0f]",tf +2, fAltura *1.3);
	gnuplot_cmd(sessao,"plot (%0.0f - (%0.0f*x*x)/2)",fAltura, g);
	
	//grafico 2b
	gnuplot_cmd(sessao,"set output \'%s/grafico2b.png\'",dir_plot);
	gnuplot_cmd(sessao,"set xrange[0:%d]; set yrange[0:%0.0f]", tf, vf );
	gnuplot_cmd(sessao, "plot (%0.0f * x)", g);	

	gnuplot_close(sessao);
	//construcao da janela
	//window
	winGraficos = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title (GTK_WINDOW (winGraficos),"Gráficos das Quedas");
	gtk_window_set_resizable (GTK_WINDOW(winGraficos), FALSE);
	gtk_window_set_keep_above (GTK_WINDOW(winGraficos), TRUE);
	gtk_window_set_position (GTK_WINDOW(winGraficos), GTK_WIN_POS_CENTER_ALWAYS);
	gtk_container_set_border_width (GTK_CONTAINER (winGraficos), 10);
	
	//table
	tblGraficos = gtk_table_new(5,2, FALSE);
	gtk_container_add(GTK_CONTAINER(winGraficos), tblGraficos);
	
	//labels
	lblGrafico1a = gtk_label_new("Gráfico Espaço X Tempo da Primeira Queda");
	gtk_table_attach(GTK_TABLE(tblGraficos), lblGrafico1a, 0, 1, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblGrafico1b = gtk_label_new("Gráfico Velocidade X Tempo da Segunda Queda");
	gtk_table_attach(GTK_TABLE(tblGraficos), lblGrafico1b, 0, 1, 2, 3, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblGrafico2a = gtk_label_new("Gráfico Espaço X Tempo da Primeira Queda");
	gtk_table_attach(GTK_TABLE(tblGraficos), lblGrafico2a, 1, 2, 0, 1, GTK_FILL, GTK_SHRINK, 0, 0);
	
	lblGrafico2b = gtk_label_new("Gráfico Velocidade X Tempo da Segunda Queda");
	gtk_table_attach(GTK_TABLE(tblGraficos), lblGrafico2b, 1, 2, 2, 3, GTK_FILL, GTK_SHRINK, 0, 0);
	
	//graficos
	imgGrafico1a = gtk_image_new_from_file(g_strdup_printf("%s%s",dir_plot,"grafico1a.png"));
	gtk_table_attach(GTK_TABLE(tblGraficos), imgGrafico1a, 0, 1, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	imgGrafico1b = gtk_image_new_from_file(g_strdup_printf("%s%s", dir_plot,"grafico1b.png"));
	gtk_table_attach(GTK_TABLE(tblGraficos), imgGrafico1b, 0, 1, 3, 4, GTK_FILL, GTK_SHRINK, 0, 0);
	
	imgGrafico2a = gtk_image_new_from_file(g_strdup_printf("%s%s",dir_plot,"grafico2a.png"));
	gtk_table_attach(GTK_TABLE(tblGraficos), imgGrafico2a, 1, 2, 1, 2, GTK_FILL, GTK_SHRINK, 0, 0);
	
	imgGrafico2b = gtk_image_new_from_file(g_strdup_printf("%s%s", dir_plot,"grafico2b.png"));
	gtk_table_attach(GTK_TABLE(tblGraficos), imgGrafico2b, 1, 2, 3, 4, GTK_FILL, GTK_SHRINK, 0, 0);
	
	
	gtk_widget_show_all(winGraficos);
}
