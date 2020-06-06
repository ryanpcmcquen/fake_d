TITLE=demo

# \
!ifndef 0 # \
# nmake: \
CP=copy # \
MV=move # \
RM=del # \
CC=clang # \
SOURCE=$(TITLE).c # \
TARGET=-o $(TITLE).exe # \
!else
# make:
CP=cp -f
MV=mv -f
RM=rm -f
CC=clang
SOURCE=$(TITLE).c
TARGET=-o $(TITLE)
# \
!endif

FLAGS=-Wall -Wextra -std=c99
COMPILE=$(CC) $(SOURCE)
RELEASE=$(COMPILE) $(TARGET)
DEBUG=$(COMPILE) -fsanitize=address -g $(TARGET)

$(TITLE): *.c *.h
    $(RELEASE)
# Windows will automatically overwrite
# the binary when using `nmake`, but
# we add the clean command for
# people who like that kind
# of thing.
clean:
    $(RM) $(TITLE)
    $(RM) $(TITLE).exe
force:
    $(RELEASE)
debug: *.c *.h
    $(DEBUG)
