#include <stdlib.h>
#include <math.h>
#include <glib.h>
#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>

#include <osm-gps-map.h>

static gboolean on_button_press_event (GtkWidget *widget, GdkEventButton *event, gpointer user_data);
static gboolean on_button_release_event (GtkWidget *widget, GdkEventButton *event, gpointer user_data);
static gboolean on_zoom_in_clicked_event (GtkWidget *widget, gpointer user_data);
static gboolean on_zoom_out_clicked_event (GtkWidget *widget, gpointer user_data);
static gboolean on_home_clicked_event (GtkWidget *widget, gpointer user_data);
static gboolean on_cache_clicked_event (GtkWidget *widget, gpointer user_data);
static void on_tiles_queued_changed (OsmGpsMap *image, GParamSpec *pspec, gpointer user_data);
static void on_gps_alpha_changed (GtkAdjustment *adjustment, gpointer user_data);
static void on_gps_width_changed (GtkAdjustment *adjustment, gpointer user_data);
static void on_star_align_changed (GtkAdjustment *adjustment, gpointer user_data);
static void on_gps_color_changed (GtkColorButton *widget, gpointer user_data);
static void on_close (GtkWidget *widget, gpointer user_data);
static void usage (GOptionContext *context);
int main (int argc, char **argv);
