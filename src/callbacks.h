/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * callbacks.h
 * Copyright (C) Diego Rubin 2007 <rubin.diego@gmail.com>
 * 
 * callbacks.h is free software.
 * 
 * You may redistribute it and/or modify it under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * callbacks.h is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with callbacks.h.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */
#ifndef _CALLBACKS_H_
#define _CALLBACKS_H_

#include <gtk/gtk.h>

static void soltar(GtkWidget *widget, gpointer data);
static void muda_planeta1(GtkWidget *widget, gpointer data);
static void muda_planeta2(GtkWidget *widget, gpointer data);
static void gera_primeiro_menu(GtkWidget *widget, gpointer data);
static void destroi_primeiro_menu(GtkWidget *widget, gpointer data);
static void gera_segundo_menu(GtkWidget *widget, gpointer data);
static void destroi_segundo_menu(GtkWidget *widget, gpointer data);
static void calcula_instante(GtkWidget *widget, gpointer data);
static void dados_pontos1(GtkWidget *widget,GdkEvent *event, gchar *data);
static void dados_pontos2(GtkWidget *widget,GdkEvent *event, gchar *data);
static void tela_graficos(GtkWidget *widget, gpointer data);
#endif
