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
#include "interface.h"
#include <gtk/gtk.h>
#include <stdlib.h>

#define cria_plot g_strdup_printf("mkdir -p %s/.gravit/plot", g_get_home_dir())
int main(int argc, char *argv[]) {
  system(cria_plot);
  g_print("Criando arquivos no home");

  gtk_init(&argc, &argv);
  gerar_win_principal();
  gtk_main();
  return (0);
}
