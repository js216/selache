// SPDX-License-Identifier: MIT
// cctest_csmith_3a2855a5.c --- cctest case csmith_3a2855a5 (csmith seed 975721893)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6e9ba137 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 975721893 -o /tmp/csmith_gen_9_wxfoav/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_8[2] = {18446744073709551609UL,18446744073709551609UL};
static uint64_t g_35 = 9UL;
static uint32_t g_52 = 0UL;
static int8_t g_61 = 0x6FL;
static int8_t g_65[3][1] = {{0x95L},{0x95L},{0x95L}};
static uint32_t g_70 = 0x29219798L;
static uint16_t g_80 = 0UL;
static uint16_t g_119 = 5UL;
static uint64_t g_126 = 0x0F7B9E3EC4118193LL;
static uint32_t g_156 = 1UL;
static uint32_t g_163 = 1UL;
static uint64_t g_172[2] = {0x5922DC5F9BFDDA35LL,0x5922DC5F9BFDDA35LL};
static int8_t g_189 = 1L;
static uint32_t g_220 = 0x49DFCDADL;
static uint8_t g_222[3] = {0xB4L,0xB4L,0xB4L};
static uint32_t g_226 = 0x249ECE0AL;
static uint16_t g_228 = 0x7EC8L;
static uint8_t g_235 = 252UL;
static int32_t g_245 = 0L;
static int8_t g_261 = 1L;
static int64_t g_262 = 1L;



static uint32_t  func_1(void);
static int16_t  func_4(uint32_t  p_5, const int64_t  p_6, uint8_t  p_7);
static const int64_t  func_9(uint64_t  p_10, uint16_t  p_11, int8_t  p_12);




static uint32_t  func_1(void)
{ 
    int64_t l_13 = 0x86BD085C9E53E58BLL;
    uint16_t l_14 = 5UL;
    uint64_t l_192[2][1];
    uint16_t l_209[2];
    int32_t l_212 = (-5L);
    uint8_t l_257 = 0UL;
    int32_t l_269 = 9L;
    int32_t l_270 = 0xE3B42F93L;
    int32_t l_271 = 0xC06E78E4L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_192[i][j] = 1UL;
    }
    for (i = 0; i < 2; i++)
        l_209[i] = 0x48B3L;
    if (((((safe_sub_func_int16_t_s_s(func_4(g_8[0], func_9(l_13, g_8[1], l_14), l_13), g_8[0])) , l_14) >= 0x8BL) <= l_13))
    { 
        int32_t l_184 = 0x770095EFL;
        uint16_t l_185[3][4] = {{65528UL,65528UL,4UL,65528UL},{65528UL,0x609CL,0x609CL,65528UL},{0x609CL,65528UL,0x609CL,0x609CL}};
        int i, j;
        l_184 = ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((g_163 <= (((1L != (g_172[1] = (g_70 ^ g_52))) < l_14) & 0x93FFL)) , l_13) & l_184), 65532UL)) || l_185[2][2]), g_65[1][0])), 0xEDL)) && 0L);
    }
    else
    { 
        uint8_t l_200 = 251UL;
        int64_t l_207 = 4L;
        int16_t l_208 = 0x5904L;
        int64_t l_210 = 0L;
        int32_t l_211[2];
        uint64_t l_223 = 0x69D1A7C047C511B6LL;
        int32_t l_234 = 0x3023009EL;
        uint16_t l_258[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
            l_211[i] = 2L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_258[i][j] = 65534UL;
        }
        for (g_70 = 0; (g_70 == 59); ++g_70)
        { 
            const uint8_t l_188 = 0UL;
            g_189 = l_188;
            if (l_188)
                goto lbl_195;
        }
        if ((safe_lshift_func_int16_t_s_s(l_13, l_192[0][0])))
        { 
lbl_195:
            for (g_189 = (-2); (g_189 < (-26)); --g_189)
            { 
                return g_65[1][0];
            }
            l_212 = (safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(((((g_126 | l_200) && ((l_211[0] &= (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((((l_207 || 1UL) <= g_119) && l_208) | l_200), 1L)), l_209[0])) != l_210), l_14))) == g_65[1][0])) & l_13) & 65531UL), 7)) >= 0x9993L) <= 18446744073709551611UL), 9L));
        }
        else
        { 
            uint16_t l_227 = 0x2396L;
            int32_t l_233[1][2];
            int32_t l_236 = 0L;
            uint8_t l_256 = 0x45L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_233[i][j] = (-1L);
            }
            if (g_189)
            { 
                int8_t l_219 = (-1L);
                int32_t l_221 = 6L;
                g_222[1] = (l_221 = ((safe_add_func_uint8_t_u_u((g_220 = (g_156 == ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_119, (0xADBEL || l_219))), g_189)) != 0UL))), g_8[0])) >= 5UL));
                g_226 = (l_223 >= (l_212 = (safe_rshift_func_int16_t_s_u((-2L), 12))));
            }
            else
            { 
                uint32_t l_237 = 18446744073709551611UL;
                g_228 = (l_227 || 251UL);
                l_236 &= (g_235 ^= (((((g_70 , ((((g_172[1] = (safe_lshift_func_int16_t_s_s((l_234 = (l_211[1] ^= ((safe_mul_func_uint16_t_u_u((l_233[0][0] = l_233[0][0]), g_220)) , 0L))), 9))) || g_8[1]) | 0UL) || 4UL)) , g_220) , g_163) , 0x9AL) , g_80));
                l_237--;
            }
            for (g_61 = 1; (g_61 >= 0); g_61 -= 1)
            { 
                int i;
                g_245 = (l_211[g_61] = (safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((((0x221738AD2CF8168FLL != ((l_211[g_61] <= ((~g_8[g_61]) ^ 0x00C1L)) < g_8[g_61])) , 0x46L) & l_212), g_220)), l_200)));
            }
            l_211[1] ^= (l_236 = (safe_add_func_uint32_t_u_u(g_156, ((safe_mod_func_int8_t_s_s(0x3DL, (l_257 &= (((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((g_8[0] == g_172[1]), g_156)) <= l_234) ^ l_207), 248UL)), l_256)) >= g_156) & l_236)))) , l_258[0][0]))));
        }
        for (l_14 = (-14); (l_14 < 9); l_14 = safe_add_func_uint32_t_u_u(l_14, 7))
        { 
            g_262 = (g_261 = l_200);
        }
    }
    l_212 = l_209[0];
    l_270 ^= (safe_rshift_func_uint8_t_u_u((g_222[1]++), ((g_70 != (safe_add_func_int8_t_s_s(g_65[1][0], (g_235--)))) == l_192[1][0])));
    return l_212;
}



static int16_t  func_4(uint32_t  p_5, const int64_t  p_6, uint8_t  p_7)
{ 
    int32_t l_34 = 8L;
    int8_t l_60[2][1];
    uint32_t l_79 = 0x7376B242L;
    int32_t l_82 = 0x2DFF541EL;
    int32_t l_87[4][1];
    uint32_t l_105 = 0UL;
    int16_t l_177 = 0x6D33L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_60[i][j] = 0x96L;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_87[i][j] = 0x4ADEF089L;
    }
    if ((safe_add_func_int16_t_s_s((g_8[0] < (((safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((65535UL == ((l_34 = (safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((g_35 ^= ((safe_div_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u(p_7, (-1L))) == 1L) , l_34) >= l_34), l_34)) != p_5)) ^ p_7), 0xE924L)) < g_8[0]), p_6))) , l_34)), g_8[1])) | g_8[0]), g_8[0])), g_8[1])) & p_6) == 0xC8EF34EA885C82F7LL)), g_8[0])))
    { 
        uint16_t l_51 = 0UL;
        int32_t l_53 = 0xFAE0CD5CL;
        int32_t l_115 = 1L;
        for (p_5 = (-18); (p_5 <= 18); p_5 = safe_add_func_int16_t_s_s(p_5, 7))
        { 
            int32_t l_50 = 0x525AC89DL;
            if (((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_34 , g_35), (g_52 = ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((l_34 == 0x24D8F3B1AD31FC53LL) || p_5), g_35)), 3)), p_6)) , l_50), l_51)) , 0UL)))), p_5)) & p_5))
            { 
                l_53 = g_35;
            }
            else
            { 
                if (g_52)
                    break;
                if (g_35)
                    break;
            }
            if (p_5)
                break;
        }
        if ((l_34 ^= (safe_mod_func_uint64_t_u_u((~(!g_52)), g_52))))
        { 
            uint8_t l_62[1];
            int i;
            for (i = 0; i < 1; i++)
                l_62[i] = 0x41L;
            if (((safe_add_func_int32_t_s_s(l_60[1][0], (g_65[1][0] |= (l_53 = (l_34 = (p_6 | ((--l_62[0]) >= 0x4C65L))))))) , 1L))
            { 
                return g_65[1][0];
            }
            else
            { 
                return p_7;
            }
        }
        else
        { 
            int32_t l_81 = (-9L);
            l_82 &= (safe_lshift_func_uint16_t_u_s(((l_53 & ((safe_add_func_uint16_t_u_u(((g_70--) < (0x14A1L == (g_80 = (((((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(p_6, 255UL)) >= p_5), g_52)) <= 1L) && 1UL) & p_7), l_60[1][0])) & g_35) , 0x7F47L) , l_79) <= l_34)))), l_81)) != p_7)) , l_81), 8));
            l_34 = g_70;
            l_53 = ((safe_sub_func_int8_t_s_s(l_87[1][0], (safe_rshift_func_uint8_t_u_s(p_6, 6)))) && (((-1L) >= l_51) != 5L));
        }
        for (l_53 = 0; (l_53 >= 0); l_53 -= 1)
        { 
            int16_t l_90 = 0xB02DL;
            int32_t l_106 = 0x0F567D2FL;
            l_90 = g_65[1][0];
            l_106 &= (safe_sub_func_int16_t_s_s((l_34 ^= (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(p_5, (safe_add_func_uint8_t_u_u((0xC889DD98L | ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(g_8[1], l_82)) , l_105), p_7)), 6)) | 1UL)), l_105)))) & p_7), 1UL))), (-4L)));
            for (l_34 = 0; (l_34 >= 0); l_34 -= 1)
            { 
                int32_t l_116 = 7L;
                int i, j;
                l_116 ^= ((((safe_mul_func_int16_t_s_s(((((l_106 = (safe_add_func_int64_t_s_s(l_60[(l_53 + 1)][l_53], ((g_65[1][0] = (safe_mul_func_uint16_t_u_u(((((l_53 > (l_115 = (safe_mod_func_uint16_t_u_u(0x1785L, 0xFFCEL)))) == 18446744073709551614UL) || p_7) & l_90), l_53))) ^ l_60[(l_53 + 1)][l_53])))) , 0x51D2L) || p_6) || p_5), p_6)) != 0x116DL) == l_53) | p_5);
                g_119 = (safe_mod_func_uint64_t_u_u((g_35 &= g_61), 1L));
            }
        }
    }
    else
    { 
        int16_t l_131[4][1];
        int32_t l_158 = 0xACFD22C8L;
        uint16_t l_168 = 1UL;
        int32_t l_169 = 0x129BBF80L;
        int32_t l_170 = 0xFFD37754L;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_131[i][j] = 0xE184L;
        }
        for (l_79 = (-14); (l_79 == 39); ++l_79)
        { 
            int16_t l_125[3][4] = {{0x8E9FL,0x8E9FL,0xC98AL,0x8E9FL},{0x8E9FL,0x9528L,0x9528L,0x8E9FL},{0x9528L,0x8E9FL,0x9528L,0x9528L}};
            int i, j;
            for (g_52 = (-12); (g_52 > 26); g_52 = safe_add_func_int32_t_s_s(g_52, 6))
            { 
                uint32_t l_124 = 0xA11D7DECL;
                l_124 &= 9L;
                g_126++;
            }
        }
lbl_132:
        l_131[0][0] = (255UL == ((safe_sub_func_uint16_t_u_u(p_6, ((l_60[0][0] <= p_6) , g_61))) < g_126));
        if (l_60[1][0])
        { 
            uint16_t l_141 = 1UL;
            int64_t l_142 = (-2L);
            if (g_126)
                goto lbl_132;
            for (l_82 = 0; (l_82 <= (-16)); l_82 = safe_sub_func_int16_t_s_s(l_82, 3))
            { 
                l_142 = (safe_lshift_func_uint16_t_u_u((((((l_34 = (p_5 == (safe_sub_func_int16_t_s_s(((safe_div_func_int64_t_s_s(g_8[1], 0x418CC4BB82127F58LL)) || (-6L)), g_52)))) <= 0L) && g_70) , l_141) | 9UL), 0));
            }
        }
        else
        { 
            uint8_t l_155 = 0x4CL;
            int32_t l_157 = 0x6C2D0C8DL;
            int32_t l_171 = (-3L);
            if (p_5)
            { 
                g_156 ^= (safe_add_func_uint64_t_u_u((!((safe_lshift_func_int16_t_s_u(g_80, 3)) ^ (safe_sub_func_uint32_t_u_u(((~(safe_rshift_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_u((p_7 |= l_155), (l_155 && (-1L)))) != l_60[1][0]) < p_6) < g_119) == 0xDEB764D4L), l_131[2][0]))) | p_6), p_5)))), 0x5B974B4E95A61D41LL));
            }
            else
            { 
                l_157 = l_79;
                l_158 = (g_70 || p_6);
            }
            g_172[1] = (l_171 &= (((l_170 = ((l_158 = 0x1CL) <= ((((l_169 = (g_80 = (((safe_sub_func_uint8_t_u_u((0x66805FA1L <= (safe_rshift_func_int16_t_s_s(((--g_163) != (((g_65[2][0] = ((safe_lshift_func_uint16_t_u_u((l_168 & l_157), g_8[0])) != g_65[2][0])) > g_8[0]) || 0x6FE41880D0CB5F59LL)), 15))), g_8[0])) < g_61) && g_35))) , g_119) != l_105) | 2L))) > l_131[2][0]) && g_65[1][0]));
            l_177 = (safe_lshift_func_int8_t_s_u(5L, (((g_126 || (g_65[1][0] = (g_61 = (safe_rshift_func_int8_t_s_s(0xE8L, g_70))))) <= p_7) ^ g_35)));
        }
    }
    return l_79;
}



static const int64_t  func_9(uint64_t  p_10, uint16_t  p_11, int8_t  p_12)
{ 
    uint16_t l_15[3];
    int i;
    for (i = 0; i < 3; i++)
        l_15[i] = 65531UL;
    for (p_12 = 0; p_12 < 3; p_12 += 1)
    {
        l_15[p_12] = 0x21A3L;
    }
    return g_8[0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);

    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_172[i], "g_172[i]", print_hash_value);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_222[i], "g_222[i]", print_hash_value);

    }
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
