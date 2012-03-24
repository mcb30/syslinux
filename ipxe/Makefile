## -----------------------------------------------------------------------
##   
##   Copyright 2008-2009 H. Peter Anvin - All Rights Reserved
##   Copyright 2009-2011 Intel Corporation; author: H. Peter Anvin
##
##   This program is free software; you can redistribute it and/or modify
##   it under the terms of the GNU General Public License as published by
##   the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
##   Boston MA 02110-1301, USA; either version 2 of the License, or
##   (at your option) any later version; incorporated herein by reference.
##
## -----------------------------------------------------------------------

#
# Makefile for ipxe/ipxelinux.0
#
# Very simple, really...
#

TARGETS	= ipxelinux.0 ipxelinuxk.0

PXEMAKE = $(MAKE) -C src NO_WERROR=1

all: $(TARGETS)

tidy:

clean: tidy

dist:
	$(MAKE) -C src veryclean > /dev/null 2>&1

spotless: clean dist
	rm -f $(TARGETS)

installer:

.NOTPARALLEL:

src/bin/blib.a:
	$(PXEMAKE) bin/blib.a

src/bin/undionly.kkkpxe: src/bin/blib.a pxelinux.ipxe ../core/pxelinux.0
	$(PXEMAKE) bin/undionly.kkkpxe EMBEDDED_IMAGE=../pxelinux.ipxe,../../core/pxelinux.0

ipxelinux.0: src/bin/undionly.kkkpxe
	cp -f $< $@

src/bin/undionly.kpxe: src/bin/blib.a pxelinuxk.ipxe ../core/pxelinux.0
	$(PXEMAKE) bin/undionly.kpxe EMBEDDED_IMAGE=../pxelinuxk.ipxe,../../core/pxelinux.0

ipxelinuxk.0: src/bin/undionly.kpxe
	cp -f $< $@
