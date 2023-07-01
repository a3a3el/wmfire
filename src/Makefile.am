bin_PROGRAMS = wmfire

wmfire_SOURCES = wmfire.c \
                 flamedefault.h \
                 flamecorona_blue.h \
                 flamecorona_red.h \
                 flameblue.h \
                 flamedarkblue.h \
                 flamegreen1.h \
                 flamegreen2.h \
                 flameorange.h \
                 icon.xpm
if SESSION
  wmfire_SOURCES += session.h session.c
endif

wmfire_LDADD = $(GTK3_LIBS) $(GTOP_LIBS) $(XEXT_LIBS) $(X11_LIBS)
if SESSION
  wmfire_LDADD += $(SM_LIBS) $(ICE_LIBS)
endif

AM_CFLAGS = $(GTK3_CFLAGS) $(GTOP_CFLAGS) $(XEXT_CFLAGS) $(X11_CFLAGS)
if SESSION
  AM_CFLAGS += $(SM_CFLAGS) $(ICE_CFLAGS)
endif
