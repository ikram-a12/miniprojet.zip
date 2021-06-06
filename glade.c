#include<stdio.h>
#include<gtk/gtk.h>
#include<string.h>
GtkBuilder *builder;
 GtkWidget *window1;
 GtkWidget *window2;
 GtkWidget *window4;
 GtkWidget *window3;
GtkWidget *window5;
GtkWidget *window6;
/*****************************/
void destroy(GtkWidget *widget, gpointer data){
gtk_widget_destroy(window1);
/*gtk_widget_destroy(window2);
gtk_widget_destroy(window3);
gtk_widget_destroy(window4);*/
}
/*****************************/
/******************************/

void print(GtkWidget *widget, gpointer data){
    GtkWidget *a,*b,*c,*d,*e,*f;
int id,nb,prix;
char t1[50],t2[50],t3[50],t4[50];
strcpy(t1,gtk_entry_get_text(GTK_ENTRY(b)));
strcpy(t2,gtk_entry_get_text(GTK_ENTRY(c)));
strcpy(t3,gtk_entry_get_text(GTK_ENTRY(d)));
strcpy(t4,gtk_entry_get_text(GTK_ENTRY(f)));
printf("%s %s %s %s",t1,t2,t3,t4);
}
/******************************/

void new_window4(GtkWidget *widget, gpointer data){

GtkWidget *id,*buttonok;
builder=gtk_builder_new_from_file("glade.glade");

 window4=GTK_WIDGET(gtk_builder_get_object(builder,"window4"));
 id=GTK_WIDGET(gtk_builder_get_object(builder,"id"));
 buttonok=GTK_WIDGET(gtk_builder_get_object(builder,"buttonok"));
 //g_signal_connect(ok,"clicked",G_CALLBACK(print),NULL);
 //g_signal_connect(buttonok,"clicked",G_CALLBACK(destroy),NULL);
 gtk_widget_show_all(window4);
}
/*********************************/
void new_window1(GtkWidget *widget, gpointer data){

GtkWidget *a,*b,*c,*d,*e,*f,*ok;
builder=gtk_builder_new_from_file("glade.glade");

 window3=GTK_WIDGET(gtk_builder_get_object(builder,"window3"));
 a=GTK_WIDGET(gtk_builder_get_object(builder,"a"));
 b=GTK_WIDGET(gtk_builder_get_object(builder,"b"));
 c=GTK_WIDGET(gtk_builder_get_object(builder,"c"));
 d=GTK_WIDGET(gtk_builder_get_object(builder,"d"));
 e=GTK_WIDGET(gtk_builder_get_object(builder,"e"));
 f=GTK_WIDGET(gtk_builder_get_object(builder,"f"));
 ok=GTK_WIDGET(gtk_builder_get_object(builder,"ok"));
 //g_signal_connect(ok,"clicked",G_CALLBACK(print),NULL);
 g_signal_connect(ok,"clicked",G_CALLBACK(destroy),NULL);
 gtk_widget_show_all(window3);
}

/***********************************/

void new_window(GtkWidget *widget, gpointer data){

GtkWidget *e1,*e2,*e3,*e4,*e5;
builder=gtk_builder_new_from_file("glade.glade");

 window2=GTK_WIDGET(gtk_builder_get_object(builder,"window2"));
 e1=GTK_WIDGET(gtk_builder_get_object(builder,"e1"));
 e2=GTK_WIDGET(gtk_builder_get_object(builder,"e2"));
 e3=GTK_WIDGET(gtk_builder_get_object(builder,"e3"));
 e4=GTK_WIDGET(gtk_builder_get_object(builder,"e4"));
 e5=GTK_WIDGET(gtk_builder_get_object(builder,"e5"));
 g_signal_connect(e2,"clicked",G_CALLBACK(new_window1),NULL);
 g_signal_connect(e3,"clicked",G_CALLBACK(new_window4),NULL);
 g_signal_connect(e4,"clicked",G_CALLBACK(new_window4),NULL);
 //g_signal_connect(e2,"clicked",G_CALLBACK(print),NULL);
 g_signal_connect(e5,"clicked",G_CALLBACK(destroy),NULL);

 gtk_widget_show_all(window2);
}
/********************************/
/***************************/
void new_window6(GtkWidget *widget, gpointer data){
GtkWidget *a1,*a2,*a3,*a4,*a5,*a6,*butt;
builder=gtk_builder_new_from_file("glade.glade");

 window6=GTK_WIDGET(gtk_builder_get_object(builder,"window6"));
 a1=GTK_WIDGET(gtk_builder_get_object(builder,"a1"));
 a2=GTK_WIDGET(gtk_builder_get_object(builder,"a2"));
 a3=GTK_WIDGET(gtk_builder_get_object(builder,"a3"));
 a4=GTK_WIDGET(gtk_builder_get_object(builder,"a4"));
 a5=GTK_WIDGET(gtk_builder_get_object(builder,"a5"));
 a6=GTK_WIDGET(gtk_builder_get_object(builder,"a6"));
 butt=GTK_WIDGET(gtk_builder_get_object(builder,"butt"));
 //g_signal_connect(ok,"clicked",G_CALLBACK(print),NULL);
 //g_signal_connect(o,"clicked",G_CALLBACK(destroy),NULL);
 gtk_widget_show_all(window6);
}
/*************************************/

void new_window5(GtkWidget *widget, gpointer data){

GtkWidget *b1,*b2,*b3,*b4,*b5;
builder=gtk_builder_new_from_file("glade.glade");

 window5=GTK_WIDGET(gtk_builder_get_object(builder,"window5"));
 b1=GTK_WIDGET(gtk_builder_get_object(builder,"b1"));
 b2=GTK_WIDGET(gtk_builder_get_object(builder,"b2"));
 b3=GTK_WIDGET(gtk_builder_get_object(builder,"b3"));
 b4=GTK_WIDGET(gtk_builder_get_object(builder,"b4"));
 b5=GTK_WIDGET(gtk_builder_get_object(builder,"b5"));
 //g_signal_connect(b2,"clicked",G_CALLBACK(new_windo5),NULL);
g_signal_connect(b3,"clicked",G_CALLBACK(new_window4),NULL);
 g_signal_connect(b4,"clicked",G_CALLBACK(new_window4),NULL);
 g_signal_connect(b2,"clicked",G_CALLBACK(new_window6),NULL);
 //g_signal_connect(e5,"clicked",G_CALLBACK(destroy),NULL);

 gtk_widget_show_all(window5);
}


/****************************/

int main(int argc, char **argv){
    gtk_init(&argc,&argv);

    //GtkWidget *window1;

    GtkWidget *button1;
    GtkWidget *button2;
    GtkWidget *button3;
    GtkWidget *button4;
 builder=gtk_builder_new_from_file("glade.glade");
 window1=GTK_WIDGET(gtk_builder_get_object(builder,"window1"));
 button1=GTK_WIDGET(gtk_builder_get_object(builder,"button1"));
 button2=GTK_WIDGET(gtk_builder_get_object(builder,"button2"));
 button3=GTK_WIDGET(gtk_builder_get_object(builder,"button3"));
 button4=GTK_WIDGET(gtk_builder_get_object(builder,"button4"));
 g_signal_connect(button2,"clicked",G_CALLBACK(new_window),NULL);
 g_signal_connect(button3,"clicked",G_CALLBACK(new_window5),NULL);
 g_signal_connect(button4,"clicked",G_CALLBACK(destroy),NULL);

 gtk_widget_show_all(window1);

 gtk_main();

return 0;}
