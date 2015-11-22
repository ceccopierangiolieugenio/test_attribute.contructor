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

#include "euLoad.h"


/* 
 * Initially empty.
 * I'm expecting this var filled with all the 
 * objects informations.
 * Any object file use the "LOADER" instruction
 * defined in "euLoad.h" who is able to append 
 * a proper euFunc_vector struct to this vect 
 * variable during the initialization 
 * (before main callback routine).
 *
 *    OBJ_X -> LOADER
 *               |
 *               |   
 *    vect  -->  X  -->  0
 *
 */
struct euFunc_vector * vect = 0;

/*
 * euParse_all
 * parse the vect variable
 * and print/exec it's values.
 */
void euParse_all(){
        struct euFunc_vector * v = vect;
        printf("\neuParse_all:\n");
        while(v){
               printf("Found ----> %s\n",v->name); 
               printf("in file --> %s\n",v->file); 
               printf("Exec it:----------------------------------------\n");
               v->f();
               printf("------------------------------------------------\n");
               printf("\n");
               v = v->next;
        }
}
