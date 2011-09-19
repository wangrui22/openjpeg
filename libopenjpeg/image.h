/*
 * Copyright (c) 2005, Herve Drolon, FreeImage Team
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS `AS IS'
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __IMAGE_H
#define __IMAGE_H
/**
@file image.h
@brief Implementation of operations on images (IMAGE)

The functions in IMAGE.C have for goal to realize operations on images.
*/

struct opj_image;
struct opj_cp_v2;

/** @defgroup IMAGE IMAGE - Implementation of operations on images */
/*@{*/

/**
Create an empty image
@todo this function should be removed
@return returns an empty image if successful, returns NULL otherwise
*/
opj_image_t* opj_image_create0(void);

/**
Create an empty image header
@return returns an image header if successful, returns NULL otherwise
*/
opj_image_header_t* opj_image_header_create0(void);


/**
 * Updates the components characteristics of the image from the coding parameters.
 *
 * @param p_image_header		the image header to update.
 * @param p_cp			the coding parameters from which to update the image.
 */
void opj_image_comp_header_update(struct opj_image_header * p_image_header, const struct opj_cp_v2* p_cp);

/*@}*/

#endif /* __IMAGE_H */

