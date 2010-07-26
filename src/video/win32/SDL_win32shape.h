/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 2010 Eli Gottlieb

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Eli Gottlieb
    eligottlieb@gmail.com
*/

#include "SDL_config.h"

#ifndef _SDL_win32shape_h
#define _SDL_win32shape_h

#include "SDL_video.h"
#include "SDL_shape.h"
#include "../SDL_sysvideo.h"

typedef struct {
	void* shapebuffer;
	Uint32 buffersize;
} SDL_ShapeData;

extern SDL_Window* Win32_CreateShapedWindow(const char *title,unsigned int x,unsigned int y,unsigned int w,unsigned int h,Uint32 flags);
extern SDL_WindowShaper* Win32_CreateShaper(SDL_Window * window);
extern int Win32_SetWindowShape(SDL_WindowShaper *shaper,SDL_Surface *shape,SDL_WindowShapeMode *shapeMode);
extern int Win32_ResizeWindowShape(SDL_Window *window);

#endif /* _SDL_win32shape_h */