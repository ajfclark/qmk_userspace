// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _LOWER,
    _RAISE,
    _NUM,
    _MOUSE,
    _ADJUST,
};

#include "oled.c"
#include "encoder.c"
#include "generated.c"
