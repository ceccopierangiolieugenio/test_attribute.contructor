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

#ifndef __EU_LOAD_H
#define __EU_LOAD_H

/*
 * These macro are used for a naming translation.
 * Are useful to maintain a correct standard
 * syntax inside the object code.
 */
#define __euAppend( _v , _n ) _v ## _n
#define  _euAppend( _v , _n ) __euAppend( _v , _n )

#define   euVect     _euAppend( OBJ_NAME , _euVect     )
#define   euFunc     _euAppend( OBJ_NAME , _euFunc     )
#define   euLoadFunc _euAppend( OBJ_NAME , _euLoadFunc )


/* 
 * "LOADER" is the default constructor used
 * for the used object injection.
 * It require a valid (unique) name defined 
 * inside "OBJ_NAME" variable
 */

#define __LOADER( _v )                          \
        void euFunc() ;                         \
        struct euFunc_vector euVect ;           \
        __attribute__ ((__constructor__))       \
        void euLoadFunc(void){                  \
             euVect.name = #_v ;                \
             euVect.file = __FILE__ ;           \
             euVect.f = euFunc ;                \
             euVect.next = vect ;               \
             vect = &euVect ;                   \
             printf(#_v " initialized.\n");     \
        }
#define  _LOADER( _v )  __LOADER( _v )
#define   LOADER         _LOADER(OBJ_NAME)

/*
 * In this vector are stored some useful
 * informations about the current object.
 */
struct euFunc_vector{
        char * name;
        char * file;
        void (*f)();
        struct euFunc_vector * next;
};

extern struct euFunc_vector * vect;

#endif
