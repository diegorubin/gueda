#ifndef _INTERFACE_H_
#define _INTERFACE_H_
#include "callbacks.c"
#include "objetos_interface.h"

void gerar_win_principal() {

  if (!cImg1 && !cImg2) {
    cImg1 = "terra.png";
    cImg2 = "lua.png";
  }

  dir_pixmaps = g_strdup_printf("/usr/share/gueda/glade/", g_get_home_dir());

  /*implementacao da window principal*/
  winPrincipal = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(winPrincipal), GTK_WIN_POS_CENTER_ALWAYS);
  gtk_container_set_border_width(GTK_CONTAINER(winPrincipal), 20);
  gtk_window_set_default_size(GTK_WINDOW(winPrincipal), 735, 570);
  gtk_window_set_title(GTK_WINDOW(winPrincipal), "Gueda");
  g_signal_connect(G_OBJECT(winPrincipal), "delete_event",
                   G_CALLBACK(gtk_main_quit), NULL);

  /*implementacao das table*/
  tblPrincipal = gtk_table_new(8, 7, FALSE);
  gtk_table_set_row_spacings(GTK_TABLE(tblPrincipal), 10);
  gtk_table_set_col_spacings(GTK_TABLE(tblPrincipal), 5);
  gtk_container_add(GTK_CONTAINER(winPrincipal), tblPrincipal);

  tblBack1 = gtk_table_new(300, 3, FALSE);
  gtk_table_set_row_spacings(GTK_TABLE(tblBack1), 1);
  gtk_table_set_col_spacings(GTK_TABLE(tblBack1), 120);
  gtk_table_attach(GTK_TABLE(tblPrincipal), tblBack1, 1, 2, 1, 5, GTK_FILL,
                   GTK_SHRINK, 0, 0);

  tblBack2 = gtk_table_new(300, 3, FALSE);
  gtk_table_set_row_spacings(GTK_TABLE(tblBack2), 1);
  gtk_table_set_col_spacings(GTK_TABLE(tblBack2), 120);
  gtk_table_attach(GTK_TABLE(tblPrincipal), tblBack2, 5, 6, 1, 5, GTK_FILL,
                   GTK_SHRINK, 0, 0);

  /*implementacao das imagens*/
  imgBack1 =
      gtk_image_new_from_file(g_strdup_printf("%s%s", dir_pixmaps, cImg1));
  gtk_table_attach(GTK_TABLE(tblPrincipal), imgBack1, 1, 2, 1, 5, GTK_FILL,
                   GTK_SHRINK, 0, 0);

  imgBack2 =
      gtk_image_new_from_file(g_strdup_printf("%s%s", dir_pixmaps, cImg2));
  gtk_table_attach(GTK_TABLE(tblPrincipal), imgBack2, 5, 6, 1, 5, GTK_FILL,
                   GTK_SHRINK, 0, 0);

  /*mostra os objetos*/
  gtk_widget_show_all(winPrincipal);
  gera_primeiro_menu(winPrincipal, NULL);
}

#endif
