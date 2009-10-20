/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * main.c
 * Copyright (C) Diego Rubin 2007 <rubin.diego@gmail.com>
 * 
 * main.c is free software.
 * 
 * You may redistribute it and/or modify it under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * main.c is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with main.c.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */
#include <stdlib.h>
#include <gtk/gtk.h>
#include "interface.h"

#define cria_dir g_strdup_printf("mkdir -p %s/.gravit/pixmaps",g_get_home_dir())
#define cria_plot g_strdup_printf("mkdir -p %s/.gravit/plot",g_get_home_dir())
#define copia_pixmaps g_strdup_printf("cp -R ../share/gravit3/glade/*png %s/.gravit/pixmaps/",g_get_home_dir())
#define copia_scripts g_strdup_printf("cp -R ../share/gravit3/glade/copia_arquivos.sh %s/.gravit/.copia_arquivos.sh; chmod +x %s/.gravit/.copia_arquivos.sh",g_get_home_dir(),g_get_home_dir())
#define checar g_strdup_printf("%s/.gravit/.copia_arquivos.sh",g_get_home_dir())	
int main(int argc, char *argv[])
{
	system(checar);
	if (!g_file_test(g_strdup_printf("%s/.gravit/ok",g_get_home_dir()), G_FILE_TEST_EXISTS)){
		system (cria_dir);
		system (copia_pixmaps);
		system (copia_scripts);
		g_print("Criando arquivos no home");}
	gtk_init(&argc, &argv);
	gerar_win_principal();
	gtk_main();
	return (0);
}
