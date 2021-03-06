# Makefile of HotelSystem
#
OBJS = hotelmain.o inputmain.o input.o reservation.o delete.o search.o outputmain.o output.o sale.o searchcustom.o searchmain.o revision.o
CC = gcc

HotelSystem:$(OBJS)
	$(CC) $(OBJS) -o HotelSystem

hotelmain.o:hotelmain.c hotel.h
	$(CC) -c hotelmain.c

inputmain.o:inputmain.c hotel.h
	$(CC) -c inputmain.c

input.o:input.c hotel.h
	$(CC) -c input.c

reservation.o:reservation.c hotel.h
	$(CC) -c reservation.c 

delete.o:delete.c hotel.h
	$(CC) -c delete.c

search.o:search.c hotel.h
	$(CC) -c search.c

outputmain.o:outputmain.c hotel.h
	$(CC) -c outputmain.c

sale.o:sale.c hotel.h
	$(CC) -c sale.c

output.o:output.c hotel.h
	$(CC) -c output.c

searchcustom.o:searchcustom.c hotel.h
	$(CC) -c searchcustom.c

searchmain.o:searchmain.c hotel.h
	$(CC) -c searchmain.c

revision.o:revision.c hotel.h
	$(CC) -c revision.c

clean:
	rm -i $(OBJS)