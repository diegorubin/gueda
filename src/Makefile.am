## Process this file with automake to produce Makefile.in

## Created by Anjuta

gladedir = $(datadir)/gueda/glade
glade_DATA = gueda.glade \
	../pixmaps/jupiter.png\
	../pixmaps/lua.png   \
	../pixmaps/marte.png   \
	../pixmaps/mercurio.png   \
	../pixmaps/netuno.png   \
	../pixmaps/objeto.png   \
	../pixmaps/saturno.png   \
	../pixmaps/terra.png   \
	../pixmaps/urano.png   \
	../pixmaps/venus.png 

INCLUDES = \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	$(GUEDA_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = gueda

gueda_SOURCES = \
	callbacks.c \
	callbacks.h \
	main.c \
	copia_arquivos.sh \
	funcoes.h \
	gnuplot_i.c \
	gnuplot_i.h \
	interface.h \
	objetos_interface.h \
	../pixmaps/jupiter.png \
	../pixmaps/lua.png \
	../pixmaps/marte.png \
	../pixmaps/mercurio.png \
	../pixmaps/netuno.png \
	../pixmaps/objeto.png \
	../pixmaps/saturno.png \
	../pixmaps/terra.png \
	../pixmaps/urano.png \
	../pixmaps/venus.png \
	../pixmaps/planeta_kayo.png 

gueda_LDFLAGS = -lm

gueda_LDADD = $(GUEDA_LIBS)

EXTRA_DIST = $(glade_DATA)



























