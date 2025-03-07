/*
 * DISTRHO Cardinal Plugin
 * Copyright (C) 2021-2022 Filipe Coelho <falktx@falktx.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of
 * the License, or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * For a full copy of the GNU General Public License see the LICENSE file.
 */

#pragma once

#if (defined(__i386__) || defined(__x86_64__) || defined(__EMSCRIPTEN__)) && !defined(CARDINAL_NOSIMD)
# include_next <xmmintrin.h>
#else
# define SIMDE_ACCURACY_PREFERENCE 0
# define SIMDE_ENABLE_NATIVE_ALIASES
# define SIMDE_FAST_CONVERSION_RANGE
# define SIMDE_FAST_MATH
# define SIMDE_FAST_NANS
# define SIMDE_FAST_ROUND_MODE
# define SIMDE_FAST_ROUND_TIES
# include "../simde/simde/x86/avx.h"
#endif
