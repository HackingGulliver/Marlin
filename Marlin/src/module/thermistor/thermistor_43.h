/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// R25 = 100 kOhm, beta25 = 4500  K, 4.7 kOhm pull-up, bed thermistor
const short temptable_43[][2] PROGMEM = {
  { OV(  15), 300 },
  { OV(  16), 295 },
  { OV(  18), 290 },
  { OV(  19), 285 },
  { OV(  20), 280 },
  { OV(  22), 275 },
  { OV(  23), 270 },
  { OV(  25), 265 },
  { OV(  27), 260 },
  { OV(  30), 255 },
  { OV(  32), 250 },
  { OV(  35), 245 },
  { OV(  38), 240 },
  { OV(  41), 235 },
  { OV(  44), 230 },
  { OV(  48), 225 },
  { OV(  53), 220 },
  { OV(  58), 215 },
  { OV(  63), 210 },
  { OV( 69), 205 },
  { OV( 76), 200 },
  { OV( 83), 195 },
  { OV( 92), 190 },
  { OV( 101), 185 },
  { OV( 111), 180 },
  { OV( 123), 175 },
  { OV( 135), 170 },
  { OV( 150), 165 },
  { OV( 165), 160 },
  { OV( 183), 155 },
  { OV( 202), 150 },
  { OV( 224), 145 },
  { OV( 247), 140 },
  { OV( 273), 135 },
  { OV( 301), 130 },
  { OV( 332), 125 },
  { OV( 365), 120 },
  { OV( 400), 115 },
  { OV( 438), 110 },
  { OV( 477), 105 },
  { OV( 518), 100 },
  { OV( 559),  95 },
  { OV( 602),  90 },
  { OV( 644),  85 },
  { OV( 685),  80 },
  { OV( 725),  75 },
  { OV( 763),  70 },
  { OV( 799),  65 },
  { OV( 832),  60 },
  { OV( 862),  55 },
  { OV( 889),  50 },
  { OV( 912),  45 },
  { OV( 933),  40 },
  { OV( 950),  35 },
  { OV( 965),  30 },
  { OV( 977),  25 },
  { OV( 987),  20 },
  { OV( 995),  15 },
  { OV( 1002),  10 },
  { OV(1007),   5 },
  { OV(1011),   0 },
};
