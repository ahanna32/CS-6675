/*
 * Copyright (c) 2001-2003, Richard Eckart
 *
 * THIS FILE IS AUTOGENERATED! DO NOT EDIT!
 * This file is generated from gui_props.ag using autogen.
 * Autogen is available at http://autogen.sourceforge.net/.
 *
 *----------------------------------------------------------------------
 * This file is part of gtk-gnutella.
 *
 *  gtk-gnutella is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  gtk-gnutella is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gtk-gnutella; if not, write to the Free Software
 *  Foundation, Inc.:
 *      51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *----------------------------------------------------------------------
 */

#ifndef _gui_property_priv_h_
#define _gui_property_priv_h_

#include <glib.h>

#include "lib/prop.h"

#ifdef GUI_SOURCES

#define GUI_PROPERTY(name)	(gui_property_variable_ ## name)
#define GUI_PROPERTY_PTR(name)	(&gui_property_variable_ ## name)

/*
 * Includes specified by "uses"-statement in .ag file
 */
#include "if/ui/gtk/gnet_stats.h"
#include "if/core/net_stats.h"
#include "ui/gtk/columns.h"
#include "ui/gtk/notebooks.h"


extern const gboolean gui_property_variable_monitor_enabled;
extern const guint32	gui_property_variable_monitor_max_items;
extern const gboolean gui_property_variable_search_hide_downloaded;
extern const guint32	gui_property_variable_nodes_col_widths[NODES_VISIBLE_COLUMNS];
extern const gboolean gui_property_variable_nodes_col_visible[NODES_VISIBLE_COLUMNS];
extern const guint32	gui_property_variable_file_info_col_widths[FILEINFO_VISIBLE_COLUMNS];
extern const gboolean gui_property_variable_file_info_col_visible[FILEINFO_VISIBLE_COLUMNS];
extern const guint32	gui_property_variable_sources_col_widths[SOURCES_VISIBLE_COLUMNS];
extern const guint32	gui_property_variable_search_list_col_widths[SEARCH_LIST_VISIBLE_COLUMNS];
extern const gboolean gui_property_variable_search_results_col_visible[SEARCH_RESULTS_VISIBLE_COLUMNS];
extern const guint32	gui_property_variable_search_results_col_widths[SEARCH_RESULTS_VISIBLE_COLUMNS];
extern const guint32	gui_property_variable_search_stats_col_widths[3];
extern const guint32	gui_property_variable_ul_stats_col_widths[UPLOAD_STATS_GUI_VISIBLE_COLUMNS];
extern const gboolean gui_property_variable_ul_stats_col_visible[UPLOAD_STATS_GUI_VISIBLE_COLUMNS];
extern const guint32	gui_property_variable_uploads_col_widths[UPLOADS_GUI_VISIBLE_COLUMNS];
extern const gboolean gui_property_variable_uploads_col_visible[UPLOADS_GUI_VISIBLE_COLUMNS];
extern const guint32	gui_property_variable_filter_rules_col_widths[4];
extern const guint32	gui_property_variable_filter_filters_col_widths[3];
extern const guint32	gui_property_variable_gnet_stats_msg_col_widths[8];
extern const guint32	gui_property_variable_gnet_stats_fc_ttl_col_widths[10];
extern const guint32	gui_property_variable_gnet_stats_fc_hops_col_widths[10];
extern const guint32	gui_property_variable_gnet_stats_fc_col_widths[10];
extern const guint32	gui_property_variable_gnet_stats_horizon_col_widths[4];
extern const guint32	gui_property_variable_gnet_stats_drop_reasons_col_widths[2];
extern const guint32	gui_property_variable_gnet_stats_recv_col_widths[10];
extern const guint32	gui_property_variable_hcache_col_widths[4];
extern const guint32	gui_property_variable_window_coords[4];
extern const guint32	gui_property_variable_filter_dlg_coords[4];
extern const guint32	gui_property_variable_prefs_dlg_coords[4];
extern const guint32	gui_property_variable_fileinfo_divider_pos;
extern const guint32	gui_property_variable_main_divider_pos;
extern const guint32	gui_property_variable_gnet_stats_divider_pos;
extern const guint32	gui_property_variable_results_divider_pos;
extern const guint32	gui_property_variable_gui_debug;
extern const guint32	gui_property_variable_filter_main_divider_pos;
extern const gboolean gui_property_variable_search_results_show_tabs;
extern const gboolean gui_property_variable_searchbar_visible;
extern const gboolean gui_property_variable_sidebar_visible;
extern const gboolean gui_property_variable_menubar_visible;
extern const gboolean gui_property_variable_statusbar_visible;
extern const gboolean gui_property_variable_progressbar_uploads_visible;
extern const gboolean gui_property_variable_progressbar_downloads_visible;
extern const gboolean gui_property_variable_progressbar_connections_visible;
extern const gboolean gui_property_variable_progressbar_bws_in_visible;
extern const gboolean gui_property_variable_progressbar_bws_out_visible;
extern const gboolean gui_property_variable_progressbar_bws_gin_visible;
extern const gboolean gui_property_variable_progressbar_bws_gout_visible;
extern const gboolean gui_property_variable_progressbar_bws_glin_visible;
extern const gboolean gui_property_variable_progressbar_bws_glout_visible;
extern const gboolean gui_property_variable_autohide_bws_gleaf;
extern const gboolean gui_property_variable_progressbar_bws_in_avg;
extern const gboolean gui_property_variable_progressbar_bws_out_avg;
extern const gboolean gui_property_variable_progressbar_bws_gin_avg;
extern const gboolean gui_property_variable_progressbar_bws_gout_avg;
extern const gboolean gui_property_variable_progressbar_bws_glin_avg;
extern const gboolean gui_property_variable_progressbar_bws_glout_avg;
extern const gboolean gui_property_variable_search_sort_casesense;
extern const guint32	gui_property_variable_search_sort_default_order;
extern const guint32	gui_property_variable_search_sort_default_column;
extern const gboolean gui_property_variable_search_discard_spam;
extern const gboolean gui_property_variable_search_discard_hashless;
extern const gboolean gui_property_variable_search_jump_to_created;
extern const guint32	gui_property_variable_search_stats_mode;
extern const guint32	gui_property_variable_search_stats_update_interval;
extern const guint32	gui_property_variable_search_stats_delcoef;
extern const gboolean gui_property_variable_confirm_quit;
extern const gboolean gui_property_variable_show_tooltips;
extern const gboolean gui_property_variable_expert_mode;
extern const gboolean gui_property_variable_gnet_stats_perc;
extern const gboolean gui_property_variable_gnet_stats_bytes;
extern const gboolean gui_property_variable_gnet_stats_hops;
extern const guint32	gui_property_variable_gnet_stats_source;
extern const guint32	gui_property_variable_gnet_stats_drop_reasons_type;
extern const gboolean gui_property_variable_gnet_stats_with_headers;
extern const gboolean gui_property_variable_gnet_stats_drop_perc;
extern const guint32	gui_property_variable_gnet_stats_general_col_widths[2];
extern const gboolean gui_property_variable_clear_uploads_complete;
extern const gboolean gui_property_variable_clear_uploads_failed;
extern const gboolean gui_property_variable_node_show_uptime;
extern const gboolean gui_property_variable_node_show_handshake_version;
extern const gboolean gui_property_variable_node_show_detailed_info;
extern const gboolean gui_property_variable_show_gnet_info_txc;
extern const gboolean gui_property_variable_show_gnet_info_rxc;
extern const gboolean gui_property_variable_show_gnet_info_tx_wire;
extern const gboolean gui_property_variable_show_gnet_info_rx_wire;
extern const gboolean gui_property_variable_show_gnet_info_tx_speed;
extern const gboolean gui_property_variable_show_gnet_info_rx_speed;
extern const gboolean gui_property_variable_show_gnet_info_tx_queries;
extern const gboolean gui_property_variable_show_gnet_info_rx_queries;
extern const gboolean gui_property_variable_show_gnet_info_tx_hits;
extern const gboolean gui_property_variable_show_gnet_info_rx_hits;
extern const gboolean gui_property_variable_show_gnet_info_gen_queries;
extern const gboolean gui_property_variable_show_gnet_info_sq_queries;
extern const gboolean gui_property_variable_show_gnet_info_tx_dropped;
extern const gboolean gui_property_variable_show_gnet_info_rx_dropped;
extern const gboolean gui_property_variable_show_gnet_info_qrp_stats;
extern const gboolean gui_property_variable_show_gnet_info_dbw;
extern const gboolean gui_property_variable_show_gnet_info_rt;
extern const gboolean gui_property_variable_show_gnet_info_shared_size;
extern const gboolean gui_property_variable_show_gnet_info_shared_files;
extern const guint32	gui_property_variable_search_accumulation_period;
extern const guint32	gui_property_variable_treemenu_nodes_expanded[nb_main_page_num];
extern const guint32	gui_property_variable_gnet_stats_pkg_col_widths[6];
extern const guint32	gui_property_variable_gnet_stats_byte_col_widths[6];
extern const guint32	gui_property_variable_config_toolbar_style;
extern const guint32	gui_property_variable_search_lifetime;
extern const gboolean gui_property_variable_status_icon_enabled;
extern const gboolean gui_property_variable_autohide_bws_dht;
extern const gboolean gui_property_variable_progressbar_bws_dht_in_visible;
extern const gboolean gui_property_variable_progressbar_bws_dht_out_visible;
extern const gboolean gui_property_variable_progressbar_bws_dht_in_avg;
extern const gboolean gui_property_variable_progressbar_bws_dht_out_avg;
extern const gboolean gui_property_variable_search_media_type_audio;
extern const gboolean gui_property_variable_search_media_type_video;
extern const gboolean gui_property_variable_search_media_type_document;
extern const gboolean gui_property_variable_search_media_type_image;
extern const gboolean gui_property_variable_search_media_type_archive;
extern const gboolean gui_property_variable_search_discard_alien_ip;
extern const gboolean gui_property_variable_search_restart_when_pending;
extern const gboolean gui_property_variable_search_discard_banned_guid;
extern const gboolean gui_property_variable_search_display_guess_stats;
extern const gboolean gui_property_variable_guess_stats_show_total;
extern const guint32	gui_property_variable_fileinfo_notebook_tab;
extern const guint32	gui_property_variable_main_notebook_tab;
extern const guint32	gui_property_variable_gnet_stats_notebook_tab;
extern const guint32	gui_property_variable_downloads_info_notebook_tab;


prop_set_t *gui_prop_init(void);
void gui_prop_shutdown(void);

#endif /* GUI_SOURCES */

#endif /* _gui_property_priv_h_ */

/* vi: set ts=4 sw=4 cindent: */
