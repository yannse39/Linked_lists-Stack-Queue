CC = gcc
CFLAGS = -W -Wall -Werror -std=c99 -pedantic
LDFLAGS =

SRC_DIR = src

SRC_FILES = $(SRC_DIR)/list_linked.c $(SRC_DIR)/stack_linked.c $(SRC_DIR)/queue_linked.c 

OBJ_FILES = $(SRC_FILES:.c=.o)

STATIC_LIB = libmylpf.a

SHARED_LIB = libmylpf.so

all: libmylpf

libmylpf: static shared

static:	$(OBJ_FILES)
	ar	rcs	$(STATIC_LIB)	$(OBJ_FILES)

shared:	$(OBJ_FILES)
	$(CC)	$(LDFLAGS)	-shared	-o	$(SHARED_LIB)	$(OBJ_FILES)

%.o:	%.c
	$(CC)	$(CFLAGS)	-c	$<	-o	$@

clean:
	rm	-f	$(OBJ_FILES)	$(STATIC_LIB)	$(SHARED_LIB)

dist:	clean
	tar	-czvf project_archive.tar.gz *

distclean:	clean
	rm	-f	project_archive.tar.gz

check:
	

.PHONY:	all libmylpf static shared clean dist distclean check