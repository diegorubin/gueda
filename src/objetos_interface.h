#ifndef _OBJETOS_INTERFACE_H_
#define _OBJETOS_INTERFACE_H_

 /*windows*/
 GtkWidget *winPrincipal;

 /*tabelas*/
 GtkWidget *tblPrincipal;
 GtkWidget *tblBack1;
 GtkWidget *tblBack2;

 /*imagens*/
 GtkWidget *imgBack1;
 GtkWidget *imgBack2;
 GtkWidget *imgObjeto1[100];
 GtkWidget *imgObjeto2[100];

 /*event boxs*/
 GtkWidget *evnObjeto1[100];
 GtkWidget *evnObjeto2[100];

 /*objetos do primeiro menu*/
 /*tabelas*/
 GtkWidget *tblDados1;
 GtkWidget *tblDados2;
 
 /*labels*/
 GtkWidget *lblMassa1;
 GtkWidget *lblMassa2;
 GtkWidget *lblAltura;
 GtkWidget *lblExpmassa1;
 GtkWidget *lblExpmassa2;
 GtkWidget *lblRaio1;
 GtkWidget *lblRaio2;
 GtkWidget *lblExpraio1;
 GtkWidget *lblExpraio2;

 /*combo box*/
 GtkWidget *cmbPlaneta1;
 GtkWidget *cmbPlaneta2;

 /*entrys*/
 GtkWidget *entExpmassa1;
 GtkWidget *entExpmassa2;
 GtkWidget *entMassa1;
 GtkWidget *entMassa2;
 GtkWidget *entAltura;
 GtkWidget *entRaio1;
 GtkWidget *entRaio2;
 GtkWidget *entExpraio1;
 GtkWidget *entExpraio2;

 /*butons*/
 GtkWidget *btnJogar;

 /*objetos do segundo menu*/
 /*frames*/
 GtkWidget *frmDados1;
 GtkWidget *frmDados2;

 /*imagens*/
 GtkWidget *imgVoltar;

 /*labels*/
 GtkWidget *lblTitulo1;
 GtkWidget *lblTitulo2;
 GtkWidget *lblInstante;
 GtkWidget *lblAlturaesc;

 /*entrys*/
 GtkWidget *entInstante;

 /*button*/
 GtkWidget *btnChecar;
 GtkWidget *btnGraficos;
 GtkWidget *btnVoltar;

 /*objetos do frame frmDados1*/ 
 GtkWidget *tblRDados1;
 GtkWidget *lblInstante1;
 GtkWidget *lblVelocidade1;
 GtkWidget *lblAceleracao1;
 GtkWidget *lblAltura1;

 // objetos do frame frmDados2
 GtkWidget *tblRDados2;
 GtkWidget *lblInstante2;
 GtkWidget *lblVelocidade2;
 GtkWidget *lblAceleracao2;
 GtkWidget *lblAltura2;

 /*variaveis globais*/
 gchar *dir_pixmaps;
 gint iPlaneta1;
 gint iPlaneta2;
 gchar *cImg1;
 gchar *cImg2;
 gchar *cTitulo1;
 gchar *cTitulo2;
 gint nimg1;
 gint nimg2;
 gdouble fAltura;
 gdouble fMassa1;
 gdouble fMassa2;
 gint iExpmassa1;
 gint iExpmassa2;
 gdouble fRaio1;
 gdouble fRaio2;
 gint iExpraio1;
 gint iExpraio2;
 gchar *ct1[100];
 gchar *ct2[100];
 int tf;
#endif
