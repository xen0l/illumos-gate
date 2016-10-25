#
# This file and its contents are supplied under the terms of the
# Common Development and Distribution License ("CDDL"), version 1.0.
# You may only use this file in accordance with the terms of version
# 1.0 of the CDDL.
#
# A full copy of the text of the CDDL should have accompanied this
# source.  A copy of the CDDL is also available via the Internet at
# http://www.illumos.org/license/CDDL.
#

#
# Copyright 2016 Adam Stevko
#

# uts/common/compat/linux/sys/Makefile
#
# include global definitions
include ../../../../../Makefile.master

HDRS=   epoll.h signalfd.h timerfd.h

ROOTDIRS= $(ROOT)/usr/include/compat/linux/sys

ROOTHDRS= $(HDRS:%=$(ROOT)/usr/include/compat/linux/sys/%)

CHECKHDRS= $(HDRS:%.h=%.check)

$(ROOTDIRS)/%: %
	$(INS.file)

.KEEP_STATE:

.PARALLEL: $(CHECKHDRS)

install_h: $(ROOTDIRS) $(ROOTHDRS)

$(ROOTDIRS):
	$(INS.dir)

check:  $(CHECKHDRS)
