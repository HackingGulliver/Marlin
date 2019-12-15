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

// R25 = 100 kOhm, beta25 = 4950 K, 4.7 kOhm pull-up, bed thermistor
const short temptable_42[][2] PROGMEM = {
  { OV(  7), 300 },
  { OV(  8), 295 },
  { OV(  9), 290 },
  { OV(  9), 285 },
  { OV(  10), 280 },
  { OV(  11), 275 },
  { OV(  12), 270 },
  { OV(  13), 265 },
  { OV(  14), 260 },
  { OV(  16), 255 },
  { OV(  17), 250 },
  { OV(  19), 245 },
  { OV(  20), 240 },
  { OV(  22), 235 },
  { OV(  25), 230 },
  { OV(  27), 225 },
  { OV(  30), 220 },
  { OV(  33), 215 },
  { OV(  36), 210 },
  { OV( 40), 205 },
  { OV( 45), 200 },
  { OV( 50), 195 },
  { OV( 56), 190 },
  { OV( 62), 185 },
  { OV( 69), 180 },
  { OV( 78), 175 },
  { OV( 87), 170 },
  { OV( 98), 165 },
  { OV( 110), 160 },
  { OV( 124), 155 },
  { OV( 139), 150 },
  { OV( 157), 145 },
  { OV( 177), 140 },
  { OV( 200), 135 },
  { OV( 225), 130 },
  { OV( 253), 125 },
  { OV( 284), 120 },
  { OV( 319), 115 },
  { OV( 357), 110 },
  { OV( 397), 105 },
  { OV( 441), 100 },
  { OV( 486),  95 },
  { OV( 533),  90 },
  { OV( 582),  85 },
  { OV( 630),  80 },
  { OV( 677),  75 },
  { OV( 723),  70 },
  { OV( 766),  65 },
  { OV( 806),  60 },
  { OV( 842),  55 },
  { OV( 875),  50 },
  { OV( 903),  45 },
  { OV( 927),  40 },
  { OV( 947),  35 },
  { OV( 963),  30 },
  { OV( 977),  25 },
  { OV( 988),  20 },
  { OV( 997),  15 },
  { OV( 1003),  10 },
  { OV(1009),   5 },
  { OV(1013),   0 },
};
