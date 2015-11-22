# Copyright (C) 07 Mar. 2011 Parodi (Pier...) Eugenio 
#                    < ceccopierangiolieugenio AT googlemail.com >
#                    https://sites.google.com/site/ceccopierangiolieugenio
#
# This library is free software; you can redistribute it and/or             
# modify it under the terms of the GNU Lesser General Public                
# License as published by the Free Software Foundation; either              
# version 2.1 of the License, or (at your option) any later version.        
#                                                                           
# This library is distributed in the hope that it will be useful,           
# but WITHOUT ANY WARRANTY; without even the implied warranty of            
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         
# Lesser General Public License for more details.                           
#                                                                           
# You should have received a copy of the GNU Lesser General Public          
# License along with this library; if not, write to the Free Software       
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA


src =	eulp/euParser.c
src +=	main.c 
src +=	obj1.c obj2.c obj3.c obj4.c

exec1 = eulp/euParser.c main.c obj1.c obj2.c obj3.c obj4.c
exec2 = eulp/euParser.c main.c obj1.c
exec3 = eulp/euParser.c main.c obj1.c obj2.c
exec4 = eulp/euParser.c main.c obj3.c obj4.c
exec5 = eulp/euParser.c main.c obj4.c obj3.c


objects  = $(patsubst %.c,obj/%.o,$(src)) 
objLink1 = $(patsubst %.c,obj/%.o,$(exec1)) 
objLink2 = $(patsubst %.c,obj/%.o,$(exec2)) 
objLink3 = $(patsubst %.c,obj/%.o,$(exec3)) 
objLink4 = $(patsubst %.c,obj/%.o,$(exec4)) 
objLink5 = $(patsubst %.c,obj/%.o,$(exec5)) 

.PHONY: all clean

all: env $(objects)
	$(CC) $(objLink1) -o bin/exec1
	$(CC) $(objLink2) -o bin/exec2
	$(CC) $(objLink3) -o bin/exec3
	$(CC) $(objLink4) -o bin/exec4
	$(CC) $(objLink5) -o bin/exec5

env:
	mkdir -p obj/eulp bin

obj/%.o : %.c
	echo $<
	$(CC) -c $(CC_FLAGS) $< -o $@

clean:
	rm -rf obj bin

