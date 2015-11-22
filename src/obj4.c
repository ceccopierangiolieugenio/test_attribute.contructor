/*
 * Copyright (C) 07 Mar. 2011 Parodi (Pier...) Eugenio 
 *                    < ceccopierangiolieugenio AT googlemail.com >
 *                    https://sites.google.com/site/ceccopierangiolieugenio
 *
 * This library is free software; you can redistribute it and/or             
 * modify it under the terms of the GNU Lesser General Public                
 * License as published by the Free Software Foundation; either              
 * version 2.1 of the License, or (at your option) any later version.        
 *                                                                           
 * This library is distributed in the hope that it will be useful,           
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         
 * Lesser General Public License for more details.                           
 *                                                                           
 * You should have received a copy of the GNU Lesser General Public          
 * License along with this library; if not, write to the Free Software       
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include <stdio.h>

#include "eulp/euLoad.h"

#define OBJ_NAME obj_D

LOADER;

extern int res;

void euFunc(void){
        printf("This is the 4th Object\n");
        printf("I'm trying to reach, inside \"obj_C\",\n");
        printf("res = %d\n",res);
}

