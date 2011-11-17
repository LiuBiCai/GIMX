/*
 * sdl_tools.h
 *
 *  Created on: 28 mai 2011
 *      Author: Matlo
 */

#ifndef SDL_TOOLS_H_
#define SDL_TOOLS_H_

#include <SDL/SDL.h>

int sdl_initialize();
void sdl_grab_toggle();
void sdl_grab();
void sdl_release_unused();
void sdl_quit();
void sdl_free_mk();

inline char* sdl_get_mouse_name(int);
inline char* sdl_get_keyboard_name(int);
inline int sdl_get_mouse_virtual_id(int);
inline int sdl_get_keyboard_virtual_id(int);
inline int sdl_get_device_id(SDL_Event*);
inline char* sdl_get_joystick_name(int);
inline int sdl_get_joystick_virtual_id(int);
inline int sdl_get_joystick_buttons(int);
int sdl_is_sixaxis(int);

#endif /* SDL_TOOLS_H_ */
