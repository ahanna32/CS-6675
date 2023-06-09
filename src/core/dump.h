/*
 * Copyright (c) 2009, Raphael Manfredi
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

/**
 * @ingroup core
 * @file
 *
 * Traffic dumping, for later analysis with barracuda.
 *
 * @author Raphael Manfredi
 * @date 2009
 */

#ifndef _core_dump_h_
#define _core_dump_h_

#include "common.h"

#include "lib/gnet_host.h"
#include "lib/pmsg.h"

struct gnutella_node;

void dump_rx_packet(const struct gnutella_node *node);
void dump_tx_tcp_packet(const struct gnutella_node *from,
	const struct gnutella_node *to, const pmsg_t *mb);
void dump_tx_udp_packet(const gnet_host_t *to, const pmsg_t *mb);

void dump_rx_set_addrs(const char *s);
void dump_tx_set_from_addrs(const char *s);
void dump_tx_set_to_addrs(const char *s);

void dump_init(void);
void dump_close(void);

#endif /* _core_dump_h_ */

/* vi: set ts=4 sw=4 cindent: */
