#
#	FILE NAME: Makefile
#
#	FILE DESCRIPTION: Make description file for building user library
#
#	PROJECT NAME: Linux Software (dm35218)
#
#	PROJECT VERSION: (Defined in README.TXT)
#
#	This file and its contents are copyright (C) RTD Embedded Technologies,
#	Inc.  All Rights Reserved.
#
#	This software is licensed as described in the RTD End-User Software
#	License Agreement.  For a copy of this agreement, refer to the file
#	LICENSE.TXT (which should be included with this software) or contact RTD
#	Embedded Technologies, Inc. 
#


CC=gcc
DEBUG_FLAGS=-g
INCLUDE_FLAGS=-I../include
OPTIMIZE_FLAGS=-O2
WARNING_FLAGS=-Wall
CFLAGS:=$(DEBUG_FLAGS) $(INCLUDE_FLAGS) $(OPTIMIZE_FLAGS) $(WARNING_FLAGS)
LIB_FILES:= \
	librtd-dm35218_dio.o \
	librtd-dm35218_temperature.o \
	librtd-dm35218_syncbus.o \
	librtd-dm35218_gbc.o \
	librtd-dm35218_util.o \
	librtd-dm35218_dma.o \
	librtd-dm35218_adc.o \
	librtd-dm35218_dac.o \
	dm35218_board_access.o \
	dm35218_os.o


all:			librtd-dm35218.a

librtd-dm35218.a:	$(LIB_FILES)
	ar -cr librtd-dm35218.a $(LIB_FILES)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o *.a *~
